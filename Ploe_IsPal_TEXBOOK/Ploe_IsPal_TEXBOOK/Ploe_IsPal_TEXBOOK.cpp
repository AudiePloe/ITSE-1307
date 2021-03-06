// 
// Audie Ploe
// 04/04/19
//
// Write a program that uses the function isPalindrome given in chapter 6
//
// get input, use texbook thing to see if palindrome, output result.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


bool isPalindrome(string str)
{
	int length = str.length();
	for (int i = 0; i < length / 2; i++)
		if (str[i] != str[length - 1 - i])
			return false;

	return true;
}

int main()
{
	string strEXAMPLE = "";
	do {
		cout << "Please enter a string (Type QUIT to quit) :";
		cin >> strEXAMPLE;
		cout << endl;

		if (isPalindrome(strEXAMPLE))
		{
			cout << "Your string is a Palindrome!" << endl;
		}
		else {
			cout << "Your string is not a Palindrome..." << endl;
		}
	} while (strEXAMPLE != "QUIT");

    return 0;
}

