// Ploe_MilesToKilometers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double miles = 0;
	double kilometer = 0;

	cout << "This program will convert miles to kilometers" << endl;
	cout << endl;

	cout << "Please enter how many miles: ";
	cin >> miles;
	cout << endl;

	kilometer = miles * 1.609;

	cout  << setw(15) << setfill('~') << setprecision(3) << "There are " << kilometer << " kilometers in " << miles << " miles" << endl;
	cout << endl;
	
    return 0;
}

