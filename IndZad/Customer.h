#pragma once

#include "Optics.h"

class Customer
{
private:
	string name;
	int age;
	int id;
	string dioptry;

public:
	Customer(string n, int age, int id, string dioptry);
	~Customer();

	string getName();
	int getAge();
	int getId();
	string getDioptry();
	void changeDioptry(string newDioptry);
};