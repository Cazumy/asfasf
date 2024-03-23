#pragma once
#include "Split_system.h"
std::string Split_system::getClassName() const {
	return "����� �������";
}

void Split_system::setSmh()  {
	int diameter;
	std::cout << "������� ������ �������� ����������: ";
	std::cin >> diameter; setImpeller_diametet(diameter);
	int consumption;
	std::cout << "������� ������ �������: "; std::cin >> consumption;
	setAir_consumption(consumption);
	float power;
	std::cout << "������� �������� �����������: "; std::cin >> power;
	setFan_power(power);
}
void Split_system::displaySmh()const  {
	std::cout << "\n\t������� ����������: " << getImpeller_diameter();
	std::cout << "\n\t�������� �����������: " << getFan_power();
	std::cout << "\n\t������ �������: " << getAir_consumption();
}

void Split_system::setImpeller_diametet(int diameter) { impeller_diameter = diameter; } // ��������� �������� ���������� ����� �������
int Split_system::getImpeller_diameter() const { return impeller_diameter; }

void Split_system::setAir_consumption(int number) { air_consumption = number; }	// ��������� ������� ������� ����� �������
int Split_system::getAir_consumption() const { return air_consumption; }

void Split_system::setFan_power(float power) { fan_power = power; }	// ��������� �������� ���������� ����� �������
float Split_system::getFan_power() const { return fan_power; }