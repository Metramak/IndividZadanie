#include <iostream>
#include "Optics.h"
#include "Customer.h"

using namespace std;

Customer::Customer(string n, int age, string dioptry) : name(n), age(age), dioptry(dioptry){}

Customer::~Customer(){}

string Customer::getName()
{
	return name;
}

int Customer::getAge()
{
	return age;
}

string Customer::getDioptry()
{
	return dioptry;
}

void Customer::changeDioptry(string newDioptry)
{
	dioptry = newDioptry;
}