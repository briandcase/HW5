// Brian Case
// TTR 1-245
// CS2410

#include <iostream>
#include "string"
#include "Roman.h"
using namespace std;

int main()
{
	string romanNumeral = "X"; // holds value of roman numeral
	int numeralInteger = 0;

	cout << "Enter a roman numeral: " << endl;
	cin >> romanNumeral; // user inputs a roman numeral

	romanType n(romanNumeral); // Creates a romantype object

	n.print(); // print out conversion

	system("pause");
	return 0;
}