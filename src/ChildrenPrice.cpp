#include <iostream>
#include "ChildrenPrice.h"

using namespace std;

ChildrenPrice::ChildrenPrice()
{
	//Default constructor
}

ChildrenPrice::~ChildrenPrice()
{
	//Default destructor
}

float ChildrenPrice::getCharge(int days)
{
	//Getter for price generation of movie type CHILDREN
	if(days < 0)
	{
		cout << "Not valid input for days at Rental_getFrequentRentalPoints" << endl;
		return 0.0;
	}
	else
		return (days > 3) ? (days-3)*1.5 : 1.5;
}

int ChildrenPrice::getFrequentRenterPoints(int days)
{
	//Getter for points generation of movie type REGULAR
	return 1;
}
