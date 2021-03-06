// 
// Audie Ploe
// 03/29/19
// finds prime numbers 1-10000
//
// get the numbers, solve for remainder, find out if prime, print prime number.
// 

#include "pch.h"
#include <iostream>

using namespace std;

bool isPrime(int pintNumber) 
{
	int intDivisionCount = 0;

	if (pintNumber == 0)
	{
		return false; // not prime
	}
	else 
	{
		for (int intPrimeCheck = 2; intPrimeCheck < pintNumber; intPrimeCheck++) 
		{

			if (pintNumber % intPrimeCheck == 0) 
			{
				intDivisionCount++;
			}
		}
	}

	if (intDivisionCount >= 1) 
	{
		return false; // not prime
	}

	return true; // is prime
}

int main()
{
	int intNumber = 0;

	for (intNumber = 1; intNumber <= 10000; intNumber++) 
	{
		if (isPrime(intNumber)) 
		{
			cout << intNumber << ", "; // formatting
		}
	}

}