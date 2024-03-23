#pragma once
#include "Fridge.h"
class Confectionery_case :public Fridge {
	int number_of_shelves;
protected:
	void displaySmh()const override {
		std::cout << "\n\t���������� �����: " << getNumber_of_shelves();
	}
	void setSmh() override {
		int amount;
		std::cout << "������� ���������� ����� ������������ �������: "; std::cin >> amount;
		setNumber_of_shelves(amount);
	}
public:
	Confectionery_case() :Fridge() {}
	Confectionery_case(Confectionery_case& obj) :Fridge(obj) {
		this->number_of_shelves = obj.number_of_shelves;
	}
	std::string getClassName() const override {
		return "������������ �������";
	}
	void setNumber_of_shelves(int temp) { number_of_shelves = temp; } // ��������� ���������� ����� ������������ �������
	int getNumber_of_shelves() const { return number_of_shelves; } // ����� ���������� ����� ������������ �������

	friend std::ostream& operator << (std::ostream& out, const Confectionery_case& obj) {
		obj.display();
		return out;
	}
};