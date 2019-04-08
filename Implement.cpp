#include "Fraction.h"
#include <conio.h>
#include <iostream>

using namespace std;

void fraction::getNumerator(int numerator) {
	cout << "please enter a numerator for the fraction: ";
	cin >> numerator;

	while (cin.fail() == true) {
		cout << "invalid input";
		cout << "please enter a numerator for the fraction: ";
		cin >> numerator;
	}

	this->numerator = numerator;
}

void fraction::getDenominator(int denominator) {
	cout << "please enter a Denominator for the fraction: ";
	cin >> denominator;

	while (cin.fail() == true || denominator < 0) {
		cout << "invalid input";
		cout << "please enter a Denominator for the fraction: ";
		cin >> denominator;
	}

	this->denominator = denominator;
}

fraction fraction::operator+(fraction addMe) {


}

fraction fraction::operator-(fraction subtractMe) {


}

fraction fraction::operator*(fraction multiplytMe) {


}

fraction fraction::operator/(fraction divideMe) {


}
