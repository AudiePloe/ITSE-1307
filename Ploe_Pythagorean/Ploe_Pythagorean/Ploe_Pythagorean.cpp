//
// Made by Audie Ploe, 02/14/19
// This program solves the pythagorean theorem
// uses the length of side a and b to find the lengh of c
//

#include "pch.h"
#include <iostream>
#include <cmath> // used for sqrt function

using namespace std;

int main()
{
	double a = 0; //
	double b = 0; // These are doubles for precision and to show decimal
	double c = 0; //

	cout << "This program solves the Pythagorean theorem" << endl << endl; // stating the program

	cout << "Please enter the length of side a and b, seperated by a space: ";
	cin >> a >> b; // getting input
	cout << endl;

	c = sqrt((a * a) + (b * b)); // solving for c using pythagorean theorem

	cout << "The lenght of side c is: " << c << endl; // showing the answer

	return 0;
}
