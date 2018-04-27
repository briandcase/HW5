#include "Roman.h"
#include <iostream>
using namespace std;

romanType::romanType()
{
}

romanType::romanType(string t)
{
	romanNumeral = t;
	numeralInteger = 0;
}

romanType::~romanType()
{
}

void romanType::setRomanNumeral(string s)
{
	romanNumeral = s;
}

void romanType::setNumeralInteger(int r)
{
	numeralInteger = r;
}

string romanType::getRomanNumeral() const
{
	return string(romanNumeral);
}

int romanType::getNumeralInteger() const
{
	return numeralInteger;
}

void romanType::print()
{
	for (int i = 0; i < romanNumeral.length(); i++) // loop through number of characters in Roman Numeral
	{
		string myString;
		myString = romanNumeral[i];
		myString += romanNumeral[i + 1]; // used for two character combinations
		if (myString == "CM") // start of loop to go through character combinations
		{
			numeralInteger += 900;
			break;
		}
		else if (myString == "CD")
		{
			numeralInteger += 400;
			break;
		}
		else if (myString == "XC")
		{
			numeralInteger += 90;
			break;
		}
		else if (myString == "XL")
		{
			numeralInteger += 40;
			break;
		}
		else if (myString == "IX")
		{
			numeralInteger += 9;
			break;
		}
		else if (myString == "IV") 
		{
			numeralInteger += 4;
			break;
		}
		else if (romanNumeral[i] == 'M')
		{
			numeralInteger += 1000;
		}
		else if (romanNumeral[i] == 'D')
		{
			numeralInteger += 500;
		}
		else if (romanNumeral[i] == 'C')
		{
			numeralInteger += 100;
		}
		else if (romanNumeral[i] == 'L')
		{
			numeralInteger += 50;
		}
		else if (romanNumeral[i] == 'X')
		{
			numeralInteger += 10;
		}
		else if (romanNumeral[i] == 'V')
		{
			numeralInteger += 5;
		}
		else if (romanNumeral[i] == 'I')
		{
			numeralInteger += 1;
		}
		else
		{
			numeralInteger += 0;
		}
	}
	cout << "The equivalent of the Roman Numeral: " << getRomanNumeral() << " is: " << getNumeralInteger() << endl; // outputs method calls
}
