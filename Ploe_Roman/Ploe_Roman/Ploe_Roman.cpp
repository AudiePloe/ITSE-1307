// 
// Audie Ploe
// 04/24/19
//
// Gets roman numerals and shows value and such.
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
	for (int intch = 0; intch < strNumeral.size(); intch++)
	{
		strNumeral.at(intch) = toupper(strNumeral.at(intch));
	}
	objNumeral.set(strNumeral);
	cout << endl;

	do
	{
		cout << "Do you want Roman numeral (R), or number (N): ";
		cin >> charNumOrRom;
		charNumOrRom = toupper(charNumOrRom);
		cout << endl;
	} while (charNumOrRom != 'R' && charNumOrRom != 'N');

	if (charNumOrRom == 'R')
	{
		cout << strNumeral << endl;
	}
	else
		cout << objNumeral.getValue() << endl;

}
