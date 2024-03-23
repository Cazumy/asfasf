#pragma once
#include <string>
class Class_Interface {
public:
	virtual void setPrice(double price) = 0;
	virtual double getPrice() const = 0;

	virtual void setModel(const char* model) = 0;
	virtual char* getModel() const = 0;

	virtual void setManufacturer() = 0;
	virtual const char* getManufacturer()const = 0;

	virtual std::string getClassName()const = 0;

	virtual void set() = 0;
	virtual void display() const = 0;
};