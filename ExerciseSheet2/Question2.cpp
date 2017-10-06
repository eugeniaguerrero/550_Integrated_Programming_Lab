#include <iostream>
using namespace std;

int main(){
	int LOWER = 0;
	int UPPER = 40;
	int STEP = 1;

	cout << "Welcome to the temperature convertor.";
	cout << "The program displays a temperature conversion chart.\n";
	
	cout << "Please state the desired lowest temperature (fahrenheit): \n";
	cin >> LOWER;
	
	cout << "Please state the desired upper temperature (fahrenheit): \n";
	cin >> UPPER;

	cout << "Finally, please state the desired step size between rows: \n";
	cin >> STEP;

	cout << "You have selected a lower temperature of " << LOWER << " degrees fahrenheit, ";
	cout << "an upper temperature of " << UPPER << " degrees fahrenheit, and ";
	cout << "a step size of " << STEP << ".\n"; 
 
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
