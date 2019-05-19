#include "Customer.h"

int main()
{
	int days=0, movieCode=0;
	std::string movieName, customerName;
	MovieType movieType;
	Customer customer;
	Rental rental;
	Movie movie;
	//Entering name of the customer
	std::cout << "Customer Name: ";
	std::cin >> customerName;
	customer = Customer(customerName);
	//Entering rental details
	while(1){
		std::cout << "Movie Name: ";
		std::getline(std::cin, movieName);
		if(std::getline(std::cin, movieName) && movieName.empty()) break;
		std::cout << "Choose movie type (NEW_RELEASE=1,REGULAR=2,CHILDREN=3): ";
		std::cin >> movieCode;
		switch(movieCode)
		{
		case 1: movieType = NEW_RELEASE;
		break;
		case 2: movieType = REGULAR;
		break;
		case 3: movieType = CHILDREN;
		break;
		default: movieType = DEFAULT;
		}
		std::cout << "Enter number of days: ";
		std::cin >> days;
		movie = Movie(movieName,movieType);
		rental = Rental(movie,days);
		customer.addRental(rental);
	}
	//Printing rental details
	customer.statement();
	return 0;
}
