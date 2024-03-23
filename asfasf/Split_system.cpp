#pragma once
#include "Split_system.h"
std::string Split_system::getClassName() const {
	return "сплит система";
}

void Split_system::setSmh()  {
	int diameter;
	std::cout << "Введите размер диаметра крыльчатки: ";
	std::cin >> diameter; setImpeller_diametet(diameter);
	int consumption;
	std::cout << "Укажите расход воздуха: "; std::cin >> consumption;
	setAir_consumption(consumption);
	float power;
	std::cout << "Укажите мощность вентилятора: "; std::cin >> power;
	setFan_power(power);
}
void Split_system::displaySmh()const  {
	std::cout << "\n\tДиаметр крыльчатки: " << getImpeller_diameter();
	std::cout << "\n\tМощность вентилятора: " << getFan_power();
	std::cout << "\n\tРасход воздуха: " << getAir_consumption();
}

void Split_system::setImpeller_diametet(int diameter) { impeller_diameter = diameter; } // установка диаметра крыльчатки сплит системы
int Split_system::getImpeller_diameter() const { return impeller_diameter; }

void Split_system::setAir_consumption(int number) { air_consumption = number; }	// установка расхода воздуха сплит системы
int Split_system::getAir_consumption() const { return air_consumption; }

void Split_system::setFan_power(float power) { fan_power = power; }	// установка мощности ветилятора сплит системы
float Split_system::getFan_power() const { return fan_power; }
