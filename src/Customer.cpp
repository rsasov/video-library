#include "Customer.h"

Customer::Customer()
{
	//Default constructor
}

Customer::Customer(std::string name)
{
	//Constructor
	this->nameCus=name;
}

Customer::~Customer()
{
	//Default destructor
}

void Customer::addRental(Rental rent)
{
	//Method for adding a rental for customer
	movieList.push_back(rent);
}

float Customer::getTotalCharge()
{
	//Method for calculating the total charge of the order
	float totalCharge=0.0;
	for(std::vector<Rental>::iterator i=movieList.begin();i!=movieList.end();i++)
	{
		totalCharge+= (*i).getCharge();
	}
	return totalCharge;
}

int Customer::getTotalFrequentRenterPoints()
{
	//Method for calculating the total amount of points for the order
	float totalPoints=0.0;
	for(std::vector<Rental>::iterator i=movieList.begin();i!=movieList.end();i++)
	{
		totalPoints+= (*i).getFrequentRenterPoints();
	}
	return totalPoints;
}

void Customer::Statement()
{
	//Method for printing out a review of the order
	std::cout<<"\n\n\nRental Record for "<<nameCus<<std::endl;
	for(std::vector<Rental>::iterator i = movieList.begin(); i != movieList.end(); i++)
	{
		std::cout<<"\t"<<(*i).getTitle()<<"\t"<<(*i).getCharge();
		std::cout<<std::endl;
	}
	std::cout<<"Amount owed is "<< this->getTotalCharge() <<std::endl;
	std::cout<<"You earned "<< this->getTotalFrequentRenterPoints() << " frequent renter points" << std::endl;
}
