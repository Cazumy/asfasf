#pragma once
#include "Statistics.h"
template <typename T>
void Statistics<T>::set_All_FromCC(Stack <T*> S) {		// ������������� ��� ������� �� ������ ��������� � ������� ������� �����
	while (!S.isEmpty()) {
		T* current = S.pop(); // ��������� ��������� �� ����������� �� �����
		T* copy = nullptr; // ������� ��������� �� ����� ������������
		for (auto it = dictionary.begin(); it != dictionary.end(); ++it) {	// ���������, ���� �� ��� ����� � ����� ������ ������
			std::string a = it->first->getModel(); std::string b = current->getModel();
			if (a == b) { // ���� ����� �����
				copy = it->first; // copy ������ ��������� �� �����
				break;
			}
		}
		if (copy == nullptr) {	// ���� ����� ���, ������� ��
			copy = current;
			dictionary[copy] = 1; // ��������� ����� � �������
		}
		else { dictionary[copy]++; }// ����������� ������� �����
	}
}
template <typename T>
void Statistics<T>::set_current_From��(Stack <T*> S) {
	S.Sdisplay();
	std::string name; std::cout << "������� ��� ������ ������� �������: ";
	std::cin >> name;
	T* tmp;
	bool find = false;
	while (!S.isEmpty()) {
		tmp = S.pop();
		if (tmp->getClassName() == name) { find = true; break; }		//���� ����� ������ ����������, �� ������ find �� true
	}
	if (!find) {
		throw std::runtime_error("�������� ���\n");		//���� ������ ������� �� ����������, �� ����� �� �������
	}
	int amount; std::cout << "������� ���������� �����: "; std::cin >> amount;
	for (int i = 0; i < amount; i++) { dictionary[tmp]++; }
}
template <typename T>
void Statistics<T>::set_current_Object(T* obj, int amount) { //������� � ������� ���� � ���������� ������
	if (amount < 0) {	// ���������� ������ ����
		throw std::out_of_range("���������� ����� ������ ����\n");
		return;
	}
	dictionary[obj] = amount;
}
template <typename T>
void Statistics<T>::add_current_Object(T* obj) {
	if (dictionary.find(obj) == dictionary.end()) {
		throw std::runtime_error("������� �� ����������\n");
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
	for (const auto& tmp : dictionary) { //����������� �������� ������ � � ���������� � �������
		std::cout << "Model - " << tmp.first->getModel() << ", amount: " << tmp.second << "\n";
	}
}
template <typename T>
double Statistics<T>::count_Statistics() {
	double total = 0, temp = 0;
	for (const auto& tmp : dictionary) {
		temp = tmp.first->getPrice() * tmp.second;	//���� ������� ���������� �� ���������� ��� �����
		total += temp;
	}
	std::cout << "Total price = " << total << "\n";
	return total;
}
template <typename T>
void Statistics<T>::clean_Statistics() { dictionary.clear(); } // �������� �������