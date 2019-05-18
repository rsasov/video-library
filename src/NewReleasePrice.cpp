#include "NewReleasePrice.h"

NewReleasePrice::NewReleasePrice()
{
	//Default constructor
}

NewReleasePrice::~NewReleasePrice()
{
	//Default destructor
}

float NewReleasePrice::getCharge(int days)
{
	//Getter for price generation of movie type NEW_RELEASE
	return days*3;
}

int NewReleasePrice::getFrequentRenterPoints(int days)
{
	//Getter for points generation of movie type NEW_RELEASE
	return (days>1)?2:1;
}
