#pragma once

#include "Optics.h"

class Customer
{
private:
	string name;
	int age;
	string dioptry;

public:
	Customer(string n, int age, string dioptry);
	~Customer();

	string getName();
	int getAge();
	string getDioptry();
	void changeDioptry(string newDioptry);
};