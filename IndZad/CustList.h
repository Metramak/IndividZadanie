#pragma once

#include "Customer.h"
#include "Optics.h"

class CustList
{
private:
	list <Customer*> custPointList;
	list <Customer*>::iterator count;

public:
	~CustList();

	void addCust(Customer*);
	int getIdFromName(string);
	string getDioptryFromId(int custId);
	int checkId(int custId);
	//void changeDioptryFromId(int custId, string newDioptry);

	void ShowCustList();


};
