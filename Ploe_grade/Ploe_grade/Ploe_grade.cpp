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

	cout << "Please enter your score: "; // prompt and input
	cin >> dblScore;
	cout << endl;

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

    return 0;
}

