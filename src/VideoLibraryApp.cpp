#include "Customer.h"

int main()
{
	int days=0, movieCode=0;
	std::string name, userName;
	MovieType movieType;
	Customer user;
	Rental rentalT;
	Movie movieT;
	//Entering name of the customer
	std::cout<<"User Name:";
	std::cin>> userName;
	user = Customer(userName);
	std::cout<<"\n\n";
	//Entering rental details
	while(1){
		std::cout<<"Movie Name:";
		std::getline( std::cin, name );
		if(std::getline( std::cin, name ) && name.empty()) break;
		std::cout<<"Choose movie type (NEW_RELEASE=1,REGULAR=2,CHILDREN=3) :";
		std::cin>>movieCode;
		switch(movieCode)
		{
		case 1: movieType=NEW_RELEASE;
		break;
		case 2: movieType=REGULAR;
		break;
		case 3: movieType=CHILDREN;
		break;
		default: movieType=DEFAULT;
		}
		std::cout<<"Enter number of days :";
		std::cin>>days;
		movieT=Movie(name,movieType);
		rentalT=Rental(movieT,days);
		user.addRental(rentalT);
		std::cout<<"\n\n\n";
	}
	//Printing rental details
	user.Statement();
	return 0;
}
