#include "Customer.h"

Customer::Customer()
{
	//Default constructor
}

Customer::Customer(std::string name)
{
	//Constructor
	customerName = name;
}

Customer::~Customer()
{
	//Default destructor
}

void Customer::addRental(Rental rental)
{
	//Method for adding a rental for customer
	movieRentals.push_back(rental);
}

float Customer::getTotalCharge()
{
	//Method for calculating the total charge of the order
	float totalCharge = 0.0;
	for(std::vector<Rental>::iterator i = movieRentals.begin(); i != movieRentals.end(); i++)
	{
		totalCharge += (*i).getCharge();
	}
	return totalCharge;
}

int Customer::getTotalFrequentRenterPoints()
{
	//Method for calculating the total amount of points for the order
	float totalPoints = 0.0;
	for(std::vector<Rental>::iterator i = movieRentals.begin(); i != movieRentals.end(); i++)
	{
		totalPoints += (*i).getFrequentRenterPoints();
	}
	return totalPoints;
}

void Customer::statement()
{
	//Method for printing out a review of the order
	std::cout << "\nRental Record for " << customerName << std::endl;
	for(std::vector<Rental>::iterator i = movieRentals.begin(); i != movieRentals.end(); i++)
	{
		std::cout << (*i).getTitle() << "- " << (*i).getCharge() << "$" << std::endl;
	}
	std::cout << "Total amount owed: " << getTotalCharge() << "$" << std::endl;
	std::cout << "You earned " << getTotalFrequentRenterPoints() << " frequent renter points" << std::endl;
}
