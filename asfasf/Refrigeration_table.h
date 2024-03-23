#pragma once
#include "Fridge.h"

class Refrigeration_table :public Fridge {
	int number_of_box, min_temperature_of_Table;
	float power_of_tabel;
protected:
	std::string getClassName() const override;
	void setSmh()override;
	void displaySmh()const override;
public:
	Refrigeration_table() :Fridge() {}
	Refrigeration_table(Refrigeration_table& obj) :Fridge(obj) {
		this->number_of_box = obj.number_of_box;
		this->min_temperature_of_Table = obj.min_temperature_of_Table;
		this->power_of_tabel = obj.power_of_tabel;
	}
	void setTemperature(int temp); // установка минимально температуры 
	int getTemperature() const; // вывод минимально температуры 

	void setNumber_of_box(int number);	// установка количества ящиков холодильного стола
	int getNumber_of_box() const;

	void setPower_of_table(float power);	// установка мощности 
	float getPower_of_table() const;
};