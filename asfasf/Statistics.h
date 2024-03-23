#pragma once
#include <map>
#include "Stack.h"
template <typename T>
class Statistics {
	std::map<T*, unsigned int> dictionary;
public:
	void set_All_FromCC(Stack <T*> S);

	void set_current_FromCC(Stack <T*> S);

	void set_current_Object(T* obj, int amount);

	void add_current_Object(T* obj);

	void remove_current_Object(T* obj);

	void delete_current_Statistics(T* obj);

	void display_Statistics() const;

	double count_Statistics();

	void clean_Statistics();
};
