// 
// Made by Audie Ploe
// 03/05/19
// 
// converts a number score into a letter grade.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double dblScore = 0;

	cout << "Please enter your score as a double: "; // prompt and input
	cin >> dblScore;
	cout << endl;

	cout << "As a double: ";

	if (dblScore >= 90)
	{
		cout << "your letter grade is A" << endl; // checking and outputing letter grade.
	} 
	else if(dblScore >= 80)
	{
		cout << "your letter grade is B" << endl;
	}
	else if (dblScore >= 70)
	{
		cout << "your letter grade is C" << endl;
	}
	else if (dblScore >= 60)
	{
		cout << "your letter grade is D" << endl;
	}
	else
	{
		cout << "your letter grade is F" << endl;
	}

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	cout << "As an int: ";

	if ((int)dblScore >= 89)
	{
		cout << "your letter grade is A" << endl; // checking and outputing letter grade.
	}
	else if ((int)dblScore >= 79)
	{
		cout << "your letter grade is B" << endl;
	}
	else if ((int)dblScore >= 69)
	{
		cout << "your letter grade is C" << endl;
	}
	else if ((int)dblScore > 59)
	{
		cout << "your letter grade is D" << endl;
	}
	else
	{
		cout << "your letter grade is F" << endl;
	}

	

	

    return 0;
}

