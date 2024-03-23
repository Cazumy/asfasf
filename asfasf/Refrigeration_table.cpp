#pragma once
#include "Refrigeration_table.h"
std::string Refrigeration_table::getClassName() const {
	return "холодильный стол";
}
void Refrigeration_table::setSmh() {
	int number;
	std::cout << "Введите количество ящиков: ";
	std::cin >> number; setNumber_of_box(number);
	int temperature;
	std::cout << "Введите минимально допустимую температуру: "; std::cin >> temperature;
	setTemperature(temperature);
	float power;
	std::cout << "Укажите мощность модели: "; std::cin >> power;
	setPower_of_table(power);
}

void Refrigeration_table::displaySmh()const  {
	std::cout << "\n\tМинимальная температура: " << getTemperature();
	std::cout << "\n\tКоличество ящиков: " << getNumber_of_box();
	std::cout << "\n\tМощность модели: " << getPower_of_table();
}

void Refrigeration_table::setTemperature(int temp) { min_temperature_of_Table = temp; } // установка минимально температуры 
int Refrigeration_table::getTemperature() const { return min_temperature_of_Table; } // вывод минимально температуры 

void Refrigeration_table::setNumber_of_box(int number) { number_of_box = number; }	// установка количества ящиков холодильного стола
int Refrigeration_table::getNumber_of_box() const { return number_of_box; }

void Refrigeration_table::setPower_of_table(float power) { power_of_tabel = power; }	// установка мощности 
float Refrigeration_table::getPower_of_table() const { return power_of_tabel; }
