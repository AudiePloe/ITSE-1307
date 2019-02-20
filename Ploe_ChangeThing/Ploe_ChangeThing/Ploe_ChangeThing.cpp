// 
// Made by Audie Ploe
// 02/19/19
// convert pennies, nickles, dimes, quarters, and half dollars into total.
//


#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int Pennies = 0;
	int Nickles = 0;
	int Dimes = 0;
	int Quarters = 0;
	int HalfDollars = 0;

	double Total = 0; // double for cents and precision.

	// prompting and getting input
	cout << "Please enter the amount of Pennies: ";
	cin >> Pennies;
	cout << endl;
	// prompting and getting input
	cout << "Please enter the amount of Nickles: ";
	cin >> Nickles;
	cout << endl;
	// prompting and getting input
	cout << "Please enter the amount of Dimes: ";
	cin >> Dimes;
	cout << endl;
	// prompting and getting input
	cout << "Please enter the amount of Quarters: ";
	cin >> Quarters;
	cout << endl;
	// prompting and getting input
	cout << "Please enter the amount of HalfDollars: ";
	cin >> HalfDollars;
	cout << endl;

	Total = ((Pennies)+(Nickles * 5) + (Dimes * 10) + (Quarters * 25) + (HalfDollars * 50)); // doing math for total

	Total /= 100;// making it readable in USD amount

	cout << "Your total is: " << Total <<" dollars" << endl; // showing total

    return 0;
}

