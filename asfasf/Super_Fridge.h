#pragma once
#include "Refrigeration_table.h"
#include "Split_system.h"
class Super_Fridge :public Refrigeration_table, Split_system {
protected:
	void setSmh()override;
	void displaySmh()const override;
	std::string getClassName()const override;
public:
	Super_Fridge():Refrigeration_table() {}
	Super_Fridge(Super_Fridge& obj) :Refrigeration_table(obj) { this->impeller_diameter = obj.impeller_diameter; }

	void display()const;
	void set();
};