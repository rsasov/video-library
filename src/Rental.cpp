#include "Rental.h"

Rental::Rental()
{
	//Default constructor
	daysRented=0;
}

Rental::Rental(Movie movie, int days)
{
	//Constructor
	this->mov=movie;
	this->daysRented=days;
}

Rental::~Rental()
{
	//Default destructor
}

float Rental::getCharge(void)
{
	//Getter for price generation of movie object member in class rental
	if(daysRented<0)
	{
		std::cout<< "Not valid input for days at Rental_getCharge" << std::endl;
		return 0.0;
	}
	else
		return mov.getCharge(daysRented);
}

int Rental::getFrequentRenterPoints(void)
{
	//Getter for points generation of movie object member in class rental
	if(daysRented<0)
	{
		std::cout<< "Not valid input for days at Rental_getFrequentRentalPoints" << std::endl;
		return 0;
	}
	else
		return mov.getFrequentRenterPoints(daysRented);
}

std::string Rental::getTitle(void)
{
	//Getter for movie object member in class rental : title
	return this->mov.getTitle();
}
