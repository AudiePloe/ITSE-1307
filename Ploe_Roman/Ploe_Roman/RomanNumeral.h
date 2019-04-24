#pragma once
#include <string>
#include <iostream>

class RomanNumeral
{
public:
	RomanNumeral();
	~RomanNumeral();
private:
	float dblNumeral;
public:
	std::string toString();
	float getValue();
	std::string getString();
	void set(float dblNumber);
	void set(std::string strNumber);
	bool isEqual(RomanNumeral *objpOther);
};
