#include "Movie.h"


Movie::Movie()
{
	//Default constructor
	title = "Default_";
	movieType = DEFAULT;
	price = 0.0;
}

Movie::Movie(std::string title, MovieType movieType)
{
	//Constructor
	this->title = title;
	this->movieType = movieType;
	price = 0.0;
}

Movie::~Movie()
{
	//Default destructor
}

std::string Movie::getTitle()
{
	//Getter for private member: title
	return title;
}

float Movie::getPrice()
{
	//Getter for private member : price
	return price;
}

float Movie::getMovieType()
{
	//Getter for private member : movieCode
	return movieType;
}

float Movie::getCharge(int days)
{
	//Getter for price generation method
	if(days <= 0)
	{
		std::cout << "Not valid input for days at Movie_getCharge" << std::endl;
		return 0.0;
	}
	else
	{
		switch(movieType){
		case 1:
			price = priceNewRelease.getCharge(days);
			break;
		case 2:
			price = priceRegular.getCharge(days);
			break;
		case 3:
			price = priceChildren.getCharge(days);
			break;
		default:
			std::cout << "\nMissing known movie code for calculating Movie_getCharge\n" << std::endl;
			price = 0.0;
		}
		return price;
	}
}

int Movie::getFrequentRenterPoints(int days)
{
	//Getter for points generation method
	if(days <= 0)
	{
		std::cout << "Not valid input for days at Rental_getFrequentRenterPoints" << std::endl;
		return 0;
	}
	else
		switch(movieType){
		case 1:
			return priceNewRelease.getFrequentRenterPoints(days);
			break;
		case 2:
			return priceRegular.getFrequentRenterPoints(days);
			break;
		case 3:
			return priceChildren.getFrequentRenterPoints(days);
			break;
		default:
			std::cout << "\nMissing known movie code for calculating Movie_getCharge\n" << std::endl;
			price = 0.0;
		}
	return 0;
}

void Movie::setPriceCode(MovieType movieType)
{
	//Setter for private member : movieCode
	if(movieType < 0 ||movieType > 4)
	{
		std::cout << "Not valid input for days at Rental_getFrequentRentalPoints" << std::endl;
	}
	else
	{
		if(movieType == 4) std::cout << "DEFAULT TYPE SET!" << std::endl;
		this->movieType = movieType;
	}
}

void Movie::operator=(const Movie &M)
{
	//Assignment operator overloading
	title = M.title;
	price = M.price;
	movieType = M.movieType;
	priceNewRelease = M.priceNewRelease;
	priceRegular = M.priceRegular;
	priceChildren = M.priceChildren;
}
