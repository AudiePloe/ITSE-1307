// 
// Made by Audie Ploe
// 03/02/19
// takes two decimals and solves c = ab / a - b
//
// get input then solve equation, then show answer
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	double intA = 0;
	double intB = 0; // initialising variables
	double intC = 0;

	cout << "Please enter two decimals seperated by spaces: ";
	cin >> intA >> intB; // getting input
	cout << endl;

	intC = (intA * intB) / (intA - intB); // solving for c

	cout << "Your answer is: " << intC << endl;

	return 0;
}