#include <iostream>
using namespace std;

const int STEP = 20;
const int LOWER = 0;
const int UPPER = 300;  

int main(){
	// define how the conversions are calculated
	int fahr = LOWER;
	double celsius = 0;
	double kelvin = 0;

	// prints the header
	cout << "Fahrenheit     Celsius     Absolute Value (Kelvin)" << endl << endl; 

	// loops through the three values, prints them out on a line
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
		cout << fahr << "     ";
		celsius = static_cast<double>(((fahr - 32.00) * 5) / 9);
		cout << celsius << "     ";
		kelvin = celsius + 273.15;
		cout << kelvin << "     " << endl;
	}
	return 0;
}
