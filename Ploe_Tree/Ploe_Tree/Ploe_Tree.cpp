﻿// 
// Audie Ploe
// 04/04/19
// 
// Make a tree using * but think that you have to use prime numbers but after realizing you didnt have to you try anyways. so here it is lol.
//
// Get all prime numbers from 0-1000, assign said numbers to a vector, used the vector and several for statements to create a tree-like abomination out of prime numbers of *.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int pintNumber){
	int intDivisionCount = 0;

	if (pintNumber == 0){
		return false; // not prime
	}
	else {
		for (int intPrimeCheck = 2; intPrimeCheck < pintNumber; intPrimeCheck++){

			if (pintNumber % intPrimeCheck == 0){
				intDivisionCount++;
			}
		}
	}

	if (intDivisionCount >= 1){
		return false; // not prime
	}
	return true; // is prime
}


void printTree(int intpSize)
{

	int intPrimeNumber = 0;
	int intNumberOfL = 1;
	vector<int> primes;


	for (intPrimeNumber = 1; intPrimeNumber <= 1000; intPrimeNumber++)
	{
		if (isPrime(intPrimeNumber))
		{
			primes.push_back(intPrimeNumber);
		}
	}

	intPrimeNumber = 0;

	for (int intRow = 1; intRow < intpSize; intRow++) {
		

		for (int intSpaces = 1; intSpaces <= intpSize - intRow; intSpaces++) {
			cout << " ";
		}
		for (int intColumn = 1; intColumn <= intNumberOfL; intColumn++)
		{
			cout << "*";
		}
		
		cout << endl;
		intPrimeNumber += 1;
		intNumberOfL = primes.at(intPrimeNumber);
	}
	//Trunk
	for (int intSpaces = 1; intSpaces < intpSize; intSpaces++) {
		cout << " ";
	}
	cout << "*" << endl;

	
}


int main()
{
	int intTreeSize = 0;

	do {
		cout << "Please enter the size of the tree you want (max is 169) : ";
		cin >> intTreeSize;
		if (intTreeSize < 170)
		{
			printTree(intTreeSize);
		}
		
	} while (intTreeSize != 0);

	cout << endl << endl;

    return 0;
}

