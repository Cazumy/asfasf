#pragma once
#include "Refrigeration_table.h"
	std::string Refrigeration_table::getClassName() const {
		return "����������� ����";
	}
	void Refrigeration_table::setSmh() {
		int number;
		std::cout << "������� ���������� ������: ";
		std::cin >> number; setNumber_of_box(number);
		int temperature;
		std::cout << "������� ���������� ���������� �����������: "; std::cin >> temperature;
		setTemperature(temperature);
		float power;
		std::cout << "������� �������� ������: "; std::cin >> power;
		setPower_of_table(power);
	}

	void Refrigeration_table::displaySmh()const  {
		std::cout << "\n\t����������� �����������: " << getTemperature();
		std::cout << "\n\t���������� ������: " << getNumber_of_box();
		std::cout << "\n\t�������� ������: " << getPower_of_table();
	}

	void Refrigeration_table::setTemperature(int temp) { min_temperature_of_Table = temp; } // ��������� ���������� ����������� 
	int Refrigeration_table::getTemperature() const { return min_temperature_of_Table; } // ����� ���������� ����������� 

	void Refrigeration_table::setNumber_of_box(int number) { number_of_box = number; }	// ��������� ���������� ������ ������������ �����
	int Refrigeration_table::getNumber_of_box() const { return number_of_box; }

	void Refrigeration_table::setPower_of_table(float power) { power_of_tabel = power; }	// ��������� �������� 
	float Refrigeration_table::getPower_of_table() const { return power_of_tabel; }
