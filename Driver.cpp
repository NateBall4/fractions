#include "Fraction.h"
#include <conio.h>
#include <iostream>

using namespace std;

int main() {
	int numerator = 0;
	int denominator = 0;
	fraction theFraction;

	theFraction.getNumerator(numerator);

		cout << endl;

		theFraction.getDenominator(denominator);

		cout << endl;

		cout << theFraction;
	_getch();
	return 0;
}
