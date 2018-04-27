#pragma once
#ifndef ROMAN_H
#define ROMAN_H
#include <string> // for string class
using namespace std;

class romanType
{
	private:
		string romanNumeral; // stores user's input for roman numeral
		int numeralInteger; // stores number conversion
	public:
		romanType(); // default constructor
		romanType(string t);
		~romanType(); // destructor
		void setRomanNumeral(string s);
		void setNumeralInteger(int r);
		string getRomanNumeral() const;
		int getNumeralInteger() const;
		void print(); // function to display values
};
#endif // !1
