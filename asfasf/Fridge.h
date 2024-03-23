#pragma once
#include "Class_Interface.h";
#include "Manufacturer.h" // подключение класса перечислений производителей
#include <iostream>

class Fridge :virtual public Class_Interface {
protected:	// бъявление элементов данных класса
	int number_of_Fridge;
	double price_of_Fridge;
	char* model_of_Fridge;			// указатель на 0 элемент массива model
	Manufacturer manufacturer_of_Fridge;
	int capacity_of_Fridge;
	static int count_of_Fridge;		// переменная отвечающая за количество объектов Fridge
	virtual void displaySmh()const;
	std::string getClassName()const override;
	virtual void setSmh();
public:

	Fridge() : model_of_Fridge(nullptr) { count_of_Fridge++; number_of_Fridge = count_of_Fridge; }		// конструктор по умолчанию с инициализацией некоторых элементов данных
		
	Fridge(const Fridge& object) {		// конструктор копирования
		count_of_Fridge++;
		price_of_Fridge = object.price_of_Fridge;
		setModel(object.model_of_Fridge);
		manufacturer_of_Fridge = object.manufacturer_of_Fridge;
		capacity_of_Fridge = object.capacity_of_Fridge;
		number_of_Fridge = count_of_Fridge;
	}

	~Fridge() {		// деструктор
		delete[] model_of_Fridge; //удаление выделенной памяти для model;
	}

	void setPrice(double price)override; // установка цены холодильника
	double getPrice() const override; // вывод цены холодильника

	void setModel(const char* model)override; // установка имени модели холодильника
	char* getModel() const override; // вывод имени модели холодильника

	void setManufacturer()override;		// установка производителя
	const char* getManufacturer()const override;	// вывод производителя

	void setCapacity(int capacity);		//установка объёма холодильника
	int getCapacity() const;		// вывод объёма холодильника

	static int getCount();		//вывод количества объектов Fridge
	int getNumber()const; // вывод номера холодильника

	void display() const override;
	void set() override;
	bool operator > (const Fridge& first)const;
	bool operator == (double price)const;

	friend std::ostream& operator << (std::ostream &out, const Fridge& obj) {
		obj.display();
		return out;
	}
};
