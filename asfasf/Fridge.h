#pragma once
#include "Class_Interface.h";
#include "Manufacturer.h" // ����������� ������ ������������ ��������������
#include <iostream>

class Fridge :virtual public Class_Interface {
protected:	// ���������� ��������� ������ ������
	int number_of_Fridge;
	double price_of_Fridge;
	char* model_of_Fridge;			// ��������� �� 0 ������� ������� model
	Manufacturer manufacturer_of_Fridge;
	int capacity_of_Fridge;
	static int count_of_Fridge;		// ���������� ���������� �� ���������� �������� Fridge
	virtual void displaySmh()const;
	std::string getClassName()const override;
	virtual void setSmh();
public:

	Fridge() : model_of_Fridge(nullptr) { count_of_Fridge++; number_of_Fridge = count_of_Fridge; }		// ����������� �� ��������� � �������������� ��������� ��������� ������
		
	Fridge(const Fridge& object) {		// ����������� �����������
		count_of_Fridge++;
		price_of_Fridge = object.price_of_Fridge;
		setModel(object.model_of_Fridge);
		manufacturer_of_Fridge = object.manufacturer_of_Fridge;
		capacity_of_Fridge = object.capacity_of_Fridge;
		number_of_Fridge = count_of_Fridge;
	}

	~Fridge() {		// ����������
		delete[] model_of_Fridge; //�������� ���������� ������ ��� model;
	}

	void setPrice(double price)override; // ��������� ���� ������������
	double getPrice() const override; // ����� ���� ������������

	void setModel(const char* model)override; // ��������� ����� ������ ������������
	char* getModel() const override; // ����� ����� ������ ������������

	void setManufacturer()override;		// ��������� �������������
	const char* getManufacturer()const override;	// ����� �������������

	void setCapacity(int capacity);		//��������� ������ ������������
	int getCapacity() const;		// ����� ������ ������������

	static int getCount();		//����� ���������� �������� Fridge
	int getNumber()const; // ����� ������ ������������

	void display() const override;
	void set() override;
	bool operator > (const Fridge& first)const;
	bool operator == (double price)const;

	friend std::ostream& operator << (std::ostream &out, const Fridge& obj) {
		obj.display();
		return out;
	}
};