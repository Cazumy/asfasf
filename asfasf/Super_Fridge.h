#pragma once
#include "Refrigeration_table.h"
#include "Split_system.h"
class Super_Fridge :public Refrigeration_table, Split_system {
protected:
	void setSmh()override {
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
	void displaySmh()const override {
		std::cout << "\n\tДиаметр крыльчатки: " << getImpeller_diameter();
		std::cout << "\n\tМинимальная температура: " << getTemperature();
		std::cout << "\n\tМощность модели: " << getPower_of_table();
		std::cout << "\n\tКоличество ящиков: " << getNumber_of_box();
	}
	std::string getClassName()const override {
		return "супер холодильник";
	}
public:
	Super_Fridge():Refrigeration_table() {}
	Super_Fridge(Super_Fridge& obj) :Refrigeration_table(obj) { this->impeller_diameter = obj.impeller_diameter; }

	void display()const {
		Fridge::display();
	}
	void set() {
		Fridge::set();
	}
};