//Discount Calculator: determines the original price and the final discounted price- after tax and all sales have been applied.
//Uses a header that has a class

#include <iostream>
#include <iomanip>
#include "class DiscountCalc.h"
using namespace std;

DiscountCalc::DiscountCalc()
{
	price = 70.0;
	dollarsOff = 10;
	discountPerc = 20;
	additionalPerc = 5;
	tax = 8.75;
}


void DiscountCalc::displayMenu() //Display the questions and get the user's input
{
    DiscountCalc myCalc;
		
	cout << "Enter in an initial price: ";
	cin >> price;
	
	cout << "How many dollars off? ";
	cin >> dollarsOff;
	
	cout <<"What percentage of a discount? ";
	cin >> discountPerc;
 
        cout <<"Any additional percentage off? ";
    	cin >> additionalPerc;
    	
    	cout <<"What's the tax? ";
    	cin >> tax;
}

float DiscountCalc::originalPrice() //Calculates the inital price with tax
{
    float totalPrice = 0,
          taxed = 0; //initialize variables to zero

    taxed = 1 + (tax / 100); 
	totalPrice = price  * taxed; //Calculate the initial price times the tax
	totalPrice = totalPrice + 0.005; //round up totalPrice to 2 decimals

	cout << fixed << setprecision(2); //shows two numbers after the decimal

    return totalPrice;	//OriginalPrice
}

float DiscountCalc::discountedPrice() //Calculates the price after all the discounts
{
	float totalPrice = 0, //from originalPrice()
              percentDiscTotal = 0,
              percentage = 0,
	      discountPrice = 0;
	

	totalPrice = originalPrice() - dollarsOff; //First subtract the dollars off from the original price
	percentage = (discountPerc + additionalPerc) / 100; //Calculate the total percentage off
	percentDiscTotal= price * percentage; //Calculate the discount taken off determined by the percentage off only
	discountPrice = totalPrice - percentDiscTotal; //Find the final discounted price

	return discountPrice; //Discounted price	
}
	
