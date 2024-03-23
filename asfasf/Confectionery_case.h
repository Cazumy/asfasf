#pragma once
#include "Fridge.h"
class Confectionery_case :public Fridge {
	int number_of_shelves;
protected:
	void displaySmh()const override;
	void setSmh() override;
public:
	Confectionery_case() :Fridge() {}
	Confectionery_case(Confectionery_case& obj) :Fridge(obj) {
		this->number_of_shelves = obj.number_of_shelves;
	}
	std::string getClassName() const override;
	void setNumber_of_shelves(int temp);
	int getNumber_of_shelves() const;
};