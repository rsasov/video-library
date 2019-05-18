#ifndef RENTAL_H_
#define RENTAL_H_

#include "Movie.h"

class Rental {
private:
	Movie mov; //Movie object
	int daysRented; //Renting days
public:
	Rental();
	Rental(Movie movie, int days);
	virtual ~Rental();
	std::string getTitle(void);
	float getCharge(void);
	int getFrequentRenterPoints(void);
};

#endif /* RENTAL_H_ */
