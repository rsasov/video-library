#ifndef MOVIE_H_
#define MOVIE_H_

#include <string>
#include "MovieType.h"
#include "Price.h"
#include "NewReleasePrice.h"
#include "RegularPrice.h"
#include "ChildrenPrice.h"

class Movie
{
private:
	std::string title; //Movie title
	float price; //Movie price
	NewReleasePrice priceN; //Price and points generator for type of movie : NEW_RELEASE
	RegularPrice priceR; //Price and points generator for type of movie : REGULAR
	ChildrenPrice priceC; //Price and points generator for type of movie : CHILDREN
	MovieType movieCode; //The type of movie (Definition of Type in movieEnum.h)

public:
	Movie();
	Movie(std::string title, MovieType movieCode);
	virtual ~Movie();
	std::string getTitle(void);
	float getPrice(void);
	float getMovieCode(void);
	float getCharge(int days);
	int getFrequentRenterPoints(int days);
	void setPriceCode(MovieType movieCode);
	void operator=(const Movie &M);
};

#endif
