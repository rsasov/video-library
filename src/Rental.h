#ifndef RENTAL_H_
#define RENTAL_H_

#include "Movie.h"

class Rental {
private:
	Movie movie; //Movie object
	int daysRented; //Renting days
public:
	Rental();
	Rental(Movie movie, int days);
	virtual ~Rental();
	std::string getTitle();
	float getCharge();
	int getFrequentRenterPoints();
};

#endif /* RENTAL_H_ */
