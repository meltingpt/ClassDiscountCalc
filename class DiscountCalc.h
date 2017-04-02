//Discount Calculator header with class instead of struct

using namespace std;

class DiscountCalc //changed from struct to class
{
	private:
		float dollarsOff,
	              additionalPerc,
		      discountPerc,
		      price,
		      tax;
	public:
		DiscountCalc(); //added DiscountCalc() from the calculator.cpp file into the class DiscountCalc.cpp
		void displayMenu(); //moved from outside struct to inside of a class
		float originalPrice(); //moved from outside struct to inside of a class
		float discountedPrice(); //moved from outside struct to inside of a class

};
