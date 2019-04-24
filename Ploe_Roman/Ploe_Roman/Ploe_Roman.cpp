// Ploe_Roman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include <iostream>
#include "RomanNumeral.h"
#include <string>

using namespace std;

int main()
{
	RomanNumeral objNumeral;
	string strNumeral = "";
	char charNumOrRom = ' ';

	cout << "Please enter a roman numeral: ";
	cin >> strNumeral;
	objNumeral.set(strNumeral);
	cout << endl;
	do
	{
		cout << "Do you want Roman numeral (R), or number (N): ";
		cin >> charNumOrRom;
		cout << endl;
	} while (charNumOrRom != 'R' | charNumOrRom != 'N');

	if (charNumOrRom == 'R')
		cout << strNumeral << endl;
	else
		cout << objNumeral.getValue() << endl;

}