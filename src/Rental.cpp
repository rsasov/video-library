#include "Rental.h"

Rental::Rental()
{
	//Default constructor
	daysRented = 0;
}

Rental::Rental(Movie movie, int days)
{
	//Constructor
	this->movie = movie;
	daysRented = days;
}

Rental::~Rental()
{
	//Default destructor
}

float Rental::getCharge()
{
	//Getter for price generation of movie object member in class rental
	if(daysRented <= 0)
	{
		std::cout << "Not valid input for days at Rental_getCharge" << std::endl;
		return 0.0;
	}
	else
		return movie.getCharge(daysRented);
}

int Rental::getFrequentRenterPoints()
{
	//Getter for points generation of movie object member in class rental
	if(daysRented <= 0)
	{
		std::cout << "Not valid input for days at Rental_getFrequentRentalPoints" << std::endl;
		return 0;
	}
	else
		return movie.getFrequentRenterPoints(daysRented);
}

std::string Rental::getTitle()
{
	//Getter for movie object member in class rental : title
	return movie.getTitle();
}
