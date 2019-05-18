#include "RegularPrice.h"


RegularPrice::RegularPrice()
{
	//Default constructor
}

RegularPrice::~RegularPrice()
{
	//Default destructor
}


float RegularPrice::getCharge(int days)
{
	//Getter for price generation of movie type REGULAR
	return (days>2)?(days-2)*1.5:2;
}

int RegularPrice::getFrequentRenterPoints(int days)
{
	//Getter for points generation of movie type REGULAR
	return 1;
}
