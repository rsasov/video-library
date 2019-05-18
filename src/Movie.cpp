#include "Movie.h"


Movie::Movie()
{
	//Default constructor
	title="Default_";
	movieCode=DEFAULT;
	price=0.0;
}

Movie::Movie(std::string title, MovieType movieCode)
{
	//Constructor
	this->title=title;
	this->movieCode=movieCode;
	price=0.0;
}

Movie::~Movie()
{
	//Default destructor
}

std::string Movie::getTitle(void)
{
	//Getter for private member: title
	return title;
}

float Movie::getPrice(void)
{
	//Getter for private member : price
	return price;
}

float Movie::getMovieCode(void)
{
	//Getter for private member : movieCode
	return movieCode;
}

float Movie::getCharge(int days)
{
	//Getter for price generation method
	if(days<0)
	{
		std::cout<< "Not valid input for days at Movie_getCharge" << std::endl;
		return 0.0;
	}
	else
	{
		switch(movieCode){
		case 1:
			price=priceN.getCharge(days);
			break;
		case 2:
			price=priceR.getCharge(days);
			break;
		case 3:
			price=priceC.getCharge(days);
			break;
		default:
			std::cout<<"\nMissing known movie code for calculating Movie_getCharge\n"<<std::endl;
			price=0.0;
		}
		return price;
	}
}

int Movie::getFrequentRenterPoints(int days)
{
	//Getter for points generation method
	if(days<0)
	{
		std::cout<< "Not valid input for days at Rental_getFrequentRenterPoints" << std::endl;
		return 0;
	}
	else
		switch(movieCode){
		case 1:
			return priceN.getFrequentRenterPoints(days);
			break;
		case 2:
			return priceR.getFrequentRenterPoints(days);
			break;
		case 3:
			return priceC.getFrequentRenterPoints(days);
			break;
		default:
			std::cout<<"\nMissing known movie code for calculating Movie_getCharge\n"<<std::endl;
			price=0.0;
		}
	return priceN.getFrequentRenterPoints(days);
}

void Movie::setPriceCode(MovieType movieCode)
{
	//Setter for private member : movieCode
	if(movieCode<0||movieCode>4)
	{
		std::cout<< "Not valid input for days at Rental_getFrequentRentalPoints" << std::endl;
	}
	else
	{
		if(movieCode==4) std::cout<< "DEFAULT TYPE SET!"<<std::endl;
		this->movieCode=movieCode;
	}
}

void Movie::operator=(const Movie &M)
{
	//Assignment operator overloading
	title=M.title;
	price=M.price;
	movieCode=M.movieCode;
	priceN=M.priceN;
	priceR=M.priceR;
	priceC=M.priceC;
}
