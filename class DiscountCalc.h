//Discount Calculator header with class

using namespace std;

class DiscountCalc 
{
	private:
		float dollarsOff,
	              additionalPerc,
		      discountPerc,
		      price,
		      tax;
	public:
		DiscountCalc(); 
		void displayMenu(); 
		float originalPrice();
		float discountedPrice(); 

};
