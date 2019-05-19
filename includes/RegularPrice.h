#ifndef REGULARPRICE_H_
#define REGULARPRICE_H_

#include "Price.h"

class RegularPrice: public Price
{
//Derived class of Price
public:
	RegularPrice();
	virtual ~RegularPrice();
	float getCharge(int days);
	int getFrequentRenterPoints(int days);
};

#endif /* REGULARPRICE_H_ */
