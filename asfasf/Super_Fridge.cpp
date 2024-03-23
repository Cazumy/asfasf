#pragma once
#include "Super_Fridge.h"
void Super_Fridge::setSmh() {
	int diameter;
	std::cout << "Введите размер диаметра крыльчатки: ";
	std::cin >> diameter; setImpeller_diametet(diameter);
	int temperature;
	std::cout << "Введите минимально допустимую температуру: "; std::cin >> temperature;
	setTemperature(temperature);
	float power;
	std::cout << "Укажите мощность модели: "; std::cin >> power;
	setPower_of_table(power);
	int number;
	std::cout << "Введите количество ящиков: ";
	std::cin >> number; setNumber_of_box(number);
}
void Super_Fridge::displaySmh()const  {
	std::cout << "\n\tДиаметр крыльчатки: " << getImpeller_diameter();
	std::cout << "\n\tМинимальная температура: " << getTemperature();
	std::cout << "\n\tМощность модели: " << getPower_of_table();
	std::cout << "\n\tКоличество ящиков: " << getNumber_of_box();
}
std::string Super_Fridge::getClassName()const  {
	return "супер холодильник";
}

void Super_Fridge::display()const {
	Fridge::display();
}
void Super_Fridge::set() {
	Fridge::set();
}