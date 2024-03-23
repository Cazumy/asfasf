#include "Fridge.h"
void Fridge::setPrice(double price) { this->price_of_Fridge = price; }
double Fridge::getPrice() const { return price_of_Fridge; }

std::string Fridge::getClassName() const{
	return "холодильник";
}
void Fridge::setModel(const char* model) {
	delete[]model_of_Fridge;
	model_of_Fridge = new char[strlen(model) + 1];
	strcpy_s(this->model_of_Fridge, strlen(model) + 1, model);
}
char* Fridge::getModel() const { return model_of_Fridge; }

void Fridge::setManufacturer() {
	int who;
	std::cout << "Введите номер производителя (1 - Bosch, 2 - LG, 3 - Samsung, 4 - Haier, 5 - Electrolux, 6 - Hicold): ";
	std::cin >> who;
	this->manufacturer_of_Fridge = static_cast<Manufacturer>(who - 1);
}

const char* Fridge::getManufacturer() const {
	switch (manufacturer_of_Fridge) {
	case Manufacturer::Bosch:
		return "Bosch";
	case Manufacturer::LG:
		return "LG";
	case Manufacturer::Samsung:
		return "Samsung";
	case Manufacturer::Haier:
		return "Haier";
	case Manufacturer::Electrolux:
		return "Electrolux";
	case Manufacturer::Hicold:
		return "Hicold";
	}
}
void Fridge::setCapacity(int capacity) { this->capacity_of_Fridge = capacity; }
int Fridge::getCapacity() const { return capacity_of_Fridge; }

int Fridge::getCount(){ return count_of_Fridge; }
int Fridge::getNumber() const { return number_of_Fridge; }

void Fridge::displaySmh()const {}

void Fridge::display() const {  
	std::cout << getClassName() <<": \n";
	std::cout << "\tИмя модели: " << getModel();
	std::cout << "\n\tЦена модели: " << getPrice();
	std::cout << "\n\tПроизводитель: " << getManufacturer();
	std::cout << "\n\tОбъём: " << getCapacity();
	displaySmh();
}
void Fridge::set() {
	double price;
	char model[100];
	int capacity;
	std::cout << "\nЗаполните информацию объекта класса: " << getClassName() << ": \n";
	std::cout << "Введите цену: "; // инициализация элементов данных объекта
	std::cin >> price; setPrice(price);
	std::cout << "Введите имя модели: ";
	std::cin >> model; setModel(model);
	setManufacturer();
	std::cout << "Введите объём: ";
	std::cin >> capacity; setCapacity(capacity);
	setSmh();
}
void Fridge::setSmh() {}
bool Fridge::operator==(double price) const {
	return this->getPrice() == price;
}
bool Fridge::operator > (const Fridge& first)const {
	return this->getPrice() > first.getPrice();
}