#ifndef CHILDRENPRICE_H_
#define CHILDRENPRICE_H_

#include <iostream>
#include "Price.h"

class ChildrenPrice: public Price
{
//Derived class of Price
public:
	ChildrenPrice();
	virtual ~ChildrenPrice();
	float getCharge(int days);
	int getFrequentRenterPoints(int days);
};

#endif /* CHILDRENPRICE_H_ */
