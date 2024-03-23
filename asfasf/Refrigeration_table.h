#pragma once
#include "Fridge.h"

class Refrigeration_table :public Fridge {
	int number_of_box, min_temperature_of_Table;
	float power_of_tabel;
protected:
	std::string getClassName() const override {
		return "холодильный стол";
	}
	void setSmh()override {
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

	void displaySmh()const override{
		std::cout << "\n\tМинимальная температура: " << getTemperature();
		std::cout << "\n\tКоличество ящиков: " << getNumber_of_box();
		std::cout << "\n\tМощность модели: " << getPower_of_table();
	}
public:
	Refrigeration_table() :Fridge() {}
	Refrigeration_table(Refrigeration_table& obj) :Fridge(obj) {
		this->number_of_box = obj.number_of_box;
		this->min_temperature_of_Table = obj.min_temperature_of_Table;
		this->power_of_tabel = obj.power_of_tabel;
	}
	void setTemperature(int temp) { min_temperature_of_Table = temp; } // установка минимально температуры 
	int getTemperature() const { return min_temperature_of_Table; } // вывод минимально температуры 

	void setNumber_of_box(int number) { number_of_box = number; }	// установка количества ящиков холодильного стола
	int getNumber_of_box() const { return number_of_box; }

	void setPower_of_table(float power) { power_of_tabel = power; }	// установка мощности 
	float getPower_of_table() const { return power_of_tabel; }

	friend std::ostream& operator << (std::ostream& out, const Refrigeration_table& obj) {
		obj.display();
		return out;
	}
};