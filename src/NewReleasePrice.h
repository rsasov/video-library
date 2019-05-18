#ifndef NEWRELEASEPRICE_H_
#define NEWRELEASEPRICE_H_

#include "Price.h"

class NewReleasePrice: public Price
{
//Derived class of Price
public:
	NewReleasePrice();
	virtual ~NewReleasePrice();
	float getCharge(int days);
	int getFrequentRenterPoints(int days);
};

#endif /* NEWRELEASEPRICE_H_ */
