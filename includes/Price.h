#ifndef PRICE_H_
#define PRICE_H_

/*Base abstract class for price*/

class Price {
	public:
		virtual ~Price();
		/*Pure virtual methods , which are defined at the derived classes*/
		virtual float getCharge(int days) = 0;
		virtual int getFrequentRenterPoints(int days) = 0;
};

#endif /* PRICE_H_ */
