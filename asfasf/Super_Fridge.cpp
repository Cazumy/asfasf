#pragma once
#include "Super_Fridge.h"
void Super_Fridge::setSmh() {
	int diameter;
	std::cout << "������� ������ �������� ����������: ";
	std::cin >> diameter; setImpeller_diametet(diameter);
	int temperature;
	std::cout << "������� ���������� ���������� �����������: "; std::cin >> temperature;
	setTemperature(temperature);
	float power;
	std::cout << "������� �������� ������: "; std::cin >> power;
	setPower_of_table(power);
	int number;
	std::cout << "������� ���������� ������: ";
	std::cin >> number; setNumber_of_box(number);
}
void Super_Fridge::displaySmh()const  {
	std::cout << "\n\t������� ����������: " << getImpeller_diameter();
	std::cout << "\n\t����������� �����������: " << getTemperature();
	std::cout << "\n\t�������� ������: " << getPower_of_table();
	std::cout << "\n\t���������� ������: " << getNumber_of_box();
}
std::string Super_Fridge::getClassName()const  {
	return "����� �����������";
}

void Super_Fridge::display()const {
	Fridge::display();
}
void Super_Fridge::set() {
	Fridge::set();
}