#pragma once
#include "Confectionery_case.h"

void Confectionery_case::displaySmh()const  {
	std::cout << "\n\tКоличество полок: " << getNumber_of_shelves();
}
void Confectionery_case::setSmh()  {
	int amount;
	std::cout << "Введите количество полок кондитерской витрины: "; std::cin >> amount;
	setNumber_of_shelves(amount);
}

std::string Confectionery_case::getClassName() const {
	return "кондитерская витрина";
}
void Confectionery_case::setNumber_of_shelves(int temp) { number_of_shelves = temp; } // установка количества полок кондитерской витрины
int Confectionery_case::getNumber_of_shelves() const { return number_of_shelves; } // вывод количества полок кондитерской витрины