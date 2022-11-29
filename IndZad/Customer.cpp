#include <iostream>
#include "Optics.h"
#include "Customer.h"

using namespace std;

Customer::Customer(string n, int custAge, int custId, string custDioptry) : name(n), age(custAge),id(custId), dioptry(custDioptry){}

Customer::~Customer(){}

string Customer::getName()
{
	return name;
}

int Customer::getAge()
{
	return age;
}

int Customer::getId()
{
	return id;
}

string Customer::getDioptry()
{
	return dioptry;
}

void Customer::changeDioptry(string newDioptry)
{
	dioptry = newDioptry;
}