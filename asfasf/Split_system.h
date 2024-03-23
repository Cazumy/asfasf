#pragma once
#include "Fridge.h"
#include"Manufacturer.h"
class Split_system:public Fridge {
	std::string getClassName() const override;
protected:
	int impeller_diameter, air_consumption;
	float fan_power;
	void setSmh() override;
	void displaySmh()const override;
public:
	Split_system() :Fridge() {}
	Split_system(Split_system& obj) :Fridge(obj) {
		this->impeller_diameter = obj.impeller_diameter;
		this->air_consumption = obj.air_consumption;
		this->fan_power = obj.fan_power;
	}

	void setImpeller_diametet(int diameter); // установка диаметра крыльчатки сплит системы
	int getImpeller_diameter() const;

	void setAir_consumption(int number);	// установка расхода воздуха сплит системы
	int getAir_consumption() const;

	void setFan_power(float power);	// установка мощности ветилятора сплит системы
	float getFan_power() const;
};