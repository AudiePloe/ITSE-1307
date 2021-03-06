//  
// Audie Ploe
// 04/04/19
//
// Write a value-returning function, isVowel, that return the value true if a given character is a vowel and otherwise returns false.
//
// get input, use bool function and switch to decide if vowel, print return.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool IsVowel(char pcharVow)
{
	pcharVow = tolower(pcharVow);

	switch (pcharVow)
	{
	case 'a': case 'e': case 'i': case 'o': case 'u':
		return true;
		break;
	default:
		return false;
	}

}

int main()
{
	char charVow = ' ';

	cout << "Please enter a letter: ";
	cin >> charVow;
	cout << endl;

	if (IsVowel(charVow))
	{
		cout << "Your letter is a vowel!" << endl;
	}
	else {
		cout << "Your letter is not a vowel... you lose :(" << endl;
	}

    return 0;
}

