#include <iostream>
#include <iomanip>
#include "conversions.h"

using namespace std;


double celsius_of(int fahr);
double absolute_value_of(int fahr);

void print_preliminary_message();
void input_table_specifications(int& lowest_entry, int& highest_entry, int& step_size);
void print_message_echoing_input(int lowest_entry, int highest_entry, int step_size);
void print_table(int lowest_entry, int highest_entry, int step_size);


int main()
{
	int lower = 0;
	int upper = 0;
	int step = 1;

	cout << setiosflags (ios::left);

	print_preliminary_message();

	input_table_specifications(lower, upper, step);

	print_message_echoing_input(lower, upper, step);

	print_table(lower, upper, step);

	return 0;
}

void print_preliminary_message()
{
	cout << "Welcome to the temperture convertor. ";
	cout << "The program displays a temperature conversion chart." << endl;
}

void input_table_specifications(int& lowest_entry, int& highest_entry, int& step_size)
{
	cout << "Please state the desired lowest temperature (Fahrenheit):" << endl;
	cin >> lowest_entry;
	cout << "Please state the desired upper temperature (Fahrenheit):" << endl;
	cin >> highest_entry;
	cout << "Please state the desired step size between rows:" << endl;
	cin >> step_size;
	cout << endl << endl;
}

void print_message_echoing_input(int lowest_entry, int highest_entry, int step_size)
{
	cout << "The temperature will be converted from a range of " << lowest_entry << " Fahrenheit" << endl;
	cout << "to " << highest_entry << " Fahreheit, in steps of ";
	cout << step_size << " Fahrenheit." << endl << endl;
}

void print_table(int lowest_entry, int highest_entry, int step_size)
{
	int fahr;

	cout.width(17);
	cout << "Fahrenheit";
	cout.width(13);
	cout << "Celsius" << "Absolute Value" << endl << endl;

	cout.precision(2);
	cout.setf(ios::fixed);

	for (fahr = lowest_entry; fahr <= highest_entry; fahr += step_size){
		cout << "     ";
		cout.width(15);
		cout << fahr;
		cout.width(15);
		cout << celsius_of(fahr) << absolute_value_of(fahr) << endl;
	}
}
