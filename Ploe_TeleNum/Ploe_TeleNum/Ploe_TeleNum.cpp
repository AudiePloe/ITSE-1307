// 
// Audie Ploe
// 04/02/19
// Write a program that outputs only telephone digits that correspond to uppercase letters
//
// get input, make lowercase and store, check placement, output answer.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string StrInput = "";
	char charLetter = ' ';

	cout << "Please input a string: ";
	cin >> StrInput;
	cout << endl;


	for (unsigned int intLetter = 0; intLetter < StrInput.length(); intLetter++) // checking each char
	{
		charLetter = StrInput.at(intLetter);

		charLetter = tolower(charLetter);

		switch (charLetter) // assigning char to number
		{
		case '1':
			cout << "1";
			break;
		case '2': case 'a': case 'b': case 'c':
			cout << "2";
			break;
		case '3': case 'd': case 'e': case 'f':
			cout << "3";
			break;
		case '4': case 'g': case 'h': case 'i':
			cout << "4";
			break;
		case '5': case 'j': case 'k': case 'l':
			cout << "5";
			break;
		case '6': case 'm': case 'n': case 'o':
			cout << "6";
			break;
		case '7': case 'p': case 'q': case 'r': case 's':
			cout << "7";
			break;
		case '8': case 't': case 'u': case 'v':
			cout << "8";
			break;
		case '9': case 'w': case 'x': case 'y': case 'z':
			cout << "9";
			break;
		case '0':
			cout << "0";
			break;
		default:
			cout << ", ERROR: Invalid Character " << "'"<< StrInput.at(intLetter) << "'" << ", "; // if unwanted char
		}
	}
	cout << endl; // formatting
}
