#include "pch.h"
#include "RomanNumeral.h"
#include <iostream>


RomanNumeral::RomanNumeral()
{
	dblNumeral = 0.0f;
}


RomanNumeral::~RomanNumeral()
{
	dblNumeral = 0.0f;
}


std::string RomanNumeral::toString()
{
	return "";
}


float RomanNumeral::getValue()
{
	return this->dblNumeral;
}


std::string RomanNumeral::getString()
{
	return this->toString();
}


void RomanNumeral::set(float dblpNumber)
{
	if (dblpNumber < 0.0f) {
		dblpNumber = 0.0;
	}
	this->dblNumeral = dblpNumber;
}


void RomanNumeral::set(std::string strpNumber)
{

	double dblSum = 0.0;
	double dblCurrent = 0.0;
	double dblLast = 1000.0;


	for (int intIndex = 0; intIndex < strpNumber.size(); intIndex++) {

		//strpNumber.at(intIndex) = std::tolower(strpNumber.at(intIndex));
		switch (strpNumber.at(intIndex)) {
		case 'M':
			dblCurrent = 1000;
			break;
		case 'D':
			dblCurrent = 500;
			break;
		case 'C':
			dblCurrent = 100;
			break;
		case 'L':
			dblCurrent = 50;
			break;
		case 'X':
			dblCurrent = 10;
			break;
		case 'V':
			dblCurrent = 5;
			break;
		case 'I':
			dblCurrent = 1;
			break;
		}
		if (dblLast < dblCurrent)
		{
			dblSum -= dblLast;
			dblSum += dblCurrent - dblLast;
		}
		else {
			dblSum += dblCurrent;
		}
		dblLast = dblCurrent;
	}
	set(dblSum);
}


bool RomanNumeral::isEqual(RomanNumeral *objpOther)
{
	return (this->getValue() == objpOther->getValue());
}