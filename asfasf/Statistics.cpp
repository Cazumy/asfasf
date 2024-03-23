#pragma once
#include "Statistics.h"
template <typename T>
void Statistics<T>::set_All_FromCC(Stack <T*> S) {		// устанавливает все объекты из класса контейнер в словарь включая копии
	while (!S.isEmpty()) {
		T* current = S.pop(); // Извлекаем указатель на холодильник из стека
		T* copy = nullptr; // Создаем указатель на копию холодильника
		for (auto it = dictionary.begin(); it != dictionary.end(); ++it) {	// Проверяем, есть ли уже копия с таким именем модели
			std::string a = it->first->getModel(); std::string b = current->getModel();
			if (a == b) { // Если нашли копию
				copy = it->first; // copy теперь указывает на копию
				break;
			}
		}
		if (copy == nullptr) {	// Если копии нет, создаем ее
			copy = current;
			dictionary[copy] = 1; // Добавляем копию в словарь
		}
		else { dictionary[copy]++; }// Увеличиваем счетчик копии
	}
}
template <typename T>
void Statistics<T>::set_current_FromСС(Stack <T*> S) {
	S.Sdisplay();
	std::string name; std::cout << "Введите имя модели нужного объекта: ";
	std::cin >> name;
	T* tmp;
	bool find = false;
	while (!S.isEmpty()) {
		tmp = S.pop();
		if (tmp->getClassName() == name) { find = true; break; }		//если такой объект существует, то меняем find на true
	}
	if (!find) {
		throw std::runtime_error("Неверное имя\n");		//если такого объекта не существует, то выход из функции
	}
	int amount; std::cout << "Введите количество копий: "; std::cin >> amount;
	for (int i = 0; i < amount; i++) { dictionary[tmp]++; }
}
template <typename T>
void Statistics<T>::set_current_Object(T* obj, int amount) { //заносит в словарь ключ и количество ключей
	if (amount < 0) {	// количество меньше нуля
		throw std::out_of_range("Количество копий меньше нуля\n");
		return;
	}
	dictionary[obj] = amount;
}
template <typename T>
void Statistics<T>::add_current_Object(T* obj) {
	if (dictionary.find(obj) == dictionary.end()) {
		throw std::runtime_error("Объекта не существует\n");
	}
	dictionary[obj]++;
}
template <typename T>
void Statistics<T>::remove_current_Object(T* obj) {
	dictionary[obj]--;
}
template <typename T>
void Statistics<T>::delete_current_Statistics(T* obj) {
	dictionary.erase(obj);
}
template <typename T>
void Statistics<T>::display_Statistics() const {
	for (const auto& tmp : dictionary) { //отображение названии модели и её количества в словаре
		std::cout << "Model - " << tmp.first->getModel() << ", amount: " << tmp.second << "\n";
	}
}
template <typename T>
double Statistics<T>::count_Statistics() {
	double total = 0, temp = 0;
	for (const auto& tmp : dictionary) {
		temp = tmp.first->getPrice() * tmp.second;	//цена объекта умножается на количество его копий
		total += temp;
	}
	std::cout << "Total price = " << total << "\n";
	return total;
}
template <typename T>
void Statistics<T>::clean_Statistics() { dictionary.clear(); } // удаление словаря