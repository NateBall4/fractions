#ifndef FRACTION
#define FRACTION

#include <iostream>

using namespace std;

class fraction {
private:
	int holder;
	int numerator;
	int denominator;

public:

	void getNumerator(int);
	void getDenominator(int);

	fraction operator+(fraction addMe);
	fraction operator-(fraction subtractMe);

	friend ostream& operator<<(ostream& outputStream, fraction& theFraction) {
		outputStream << theFraction.numerator << endl;
		outputStream << "---" << endl;
		outputStream << theFraction.denominator << endl;
		return outputStream;
	}

};

#endif
