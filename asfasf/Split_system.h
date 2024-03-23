#pragma once
#include "Fridge.h"
#include"Manufacturer.h"
class Split_system:public Fridge {
	std::string getClassName() const override {
		return "сплит система";
	}
protected:
	int impeller_diameter, air_consumption;
	float fan_power;
	void setSmh() override{
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
	void displaySmh()const override {
		std::cout << "\n\tДиаметр крыльчатки: " << getImpeller_diameter();
		std::cout << "\n\tМощность вентилятора: " << getFan_power();
		std::cout << "\n\tРасход воздуха: " << getAir_consumption();
	}
public:
	Split_system() :Fridge() {}
	Split_system(Split_system& obj) :Fridge(obj) {
		this->impeller_diameter = obj.impeller_diameter;
		this->air_consumption = obj.air_consumption;
		this->fan_power = obj.fan_power;
	}


	void setImpeller_diametet(int diameter) { impeller_diameter = diameter; } // установка диаметра крыльчатки сплит системы
	int getImpeller_diameter() const { return impeller_diameter; }

	void setAir_consumption(int number) { air_consumption = number; }	// установка расхода воздуха сплит системы
	int getAir_consumption() const { return air_consumption; }

	void setFan_power(float power) { fan_power = power; }	// установка мощности ветилятора сплит системы
	float getFan_power() const { return fan_power; }
};