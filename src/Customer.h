#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include "Rental.h"
#include <vector>

class Customer
{
private:
	std::string customerName; //Customer's name
	std::vector<Rental> movieRentals; //Vector of Rentals
public:
	Customer();
	Customer(std::string name);
	virtual ~Customer();
	void addRental(Rental rental);
	void statement();
	float getTotalCharge();
	int getTotalFrequentRenterPoints();
};

#endif /* CUSTOMER_H_ */
