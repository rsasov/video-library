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
	NewReleasePrice priceNewRelease; //Price and points generator for type of movie : NEW_RELEASE
	RegularPrice priceRegular; //Price and points generator for type of movie : REGULAR
	ChildrenPrice priceChildren; //Price and points generator for type of movie : CHILDREN
	MovieType movieType; //The type of movie (Definition of Type in movieEnum.h)

public:
	Movie();
	Movie(std::string title, MovieType movieType);
	virtual ~Movie();
	std::string getTitle();
	float getPrice();
	float getMovieType();
	float getCharge(int days);
	int getFrequentRenterPoints(int days);
	void setPriceCode(MovieType movieType);
	void operator=(const Movie &M);
};

#endif
