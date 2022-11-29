#include <iostream>
#include "CustList.h"
#include "Optics.h"

CustList::~CustList()
{
	while (!custPointList.empty())
	{
		count = custPointList.begin();
		delete* count;

		custPointList.erase(count);
	}
}

void CustList::addCust(Customer* custPtr)
{
	custPointList.push_back(custPtr);
}

int CustList::getIdFromName(string custName)
{
	int custId;
	count = custPointList.begin();

	while (count != custPointList.end())
	{
		custId = (*count)->getId();
		if (custName == ((*count)->getName())) return custId;

		count++;
	}
	return -1;
}

string CustList::getDioptryFromId(int custId)
{
	count = custPointList.begin();

	while (count != custPointList.end())
	{
		if (custId == ((*count)->getId()))
		{
			return (*count)->getDioptry();
		}
		count++;
	}
}

int CustList::checkId(int custId)
{
	int check = -1;
	if (custPointList.empty()) return 0;
	else
	{
		count = custPointList.begin();
		while (count != custPointList.end())
		{
			if ((*count)->getId() == custId) check = 1;

			count++;
		}
		return check;
	}
}

void CustList::ShowCustList() {}