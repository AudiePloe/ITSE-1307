// 
// Audie Ploe
// 03/26/19
// Write a program that prompts the user to input an integer and then outputs both the individual digits of the number and the sum of the digits.
//
// get input, output numbers, output sum.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int intNumber = 0;
	int intSum = 0;
	int intOne = 0;
	int intTwo = 0;

	cout << "Please enter a number between 10 and 100: ";
	cin >> intNumber;
	cout << endl;

	intOne = intNumber / 10;
	intTwo = intNumber;

	for (int intCounter = 10; intTwo > 10; )
	{
		intTwo -= intCounter;
	}

	intSum = intOne + intTwo;

	cout << intOne << endl << intTwo << endl << "Sum: " << intSum << endl;

    return 0;
}

