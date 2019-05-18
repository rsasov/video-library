#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include "Rental.h"
#include <vector>

class Customer
{
private:
	std::string nameCus; //Customer's name
	std::vector<Rental>movieList; //Vector of Rentals
public:
	Customer();
	Customer(std::string name);
	virtual ~Customer();
	void addRental(Rental rent);
	void Statement();
	float getTotalCharge();
	int getTotalFrequentRenterPoints();
};

#endif /* CUSTOMER_H_ */
