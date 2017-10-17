#include <iostream>
#include <cmath>
#include "IntegerArray.h"

using namespace std;

void input_array(int list[], int number)
{
	for (int count = 0; count < number ; count++)
	{
		cout << "Enter value for element " << count << ": ";
		cin >> list[count];
	}

}

void display_array(int list[], int number)
{
	int count;
	for (count = 0; count < number; count++){
		cout.width(5);
		cout << list[count] << " ";
	}
	cout << "\n"; 
}

void copy_array(int target_list[], int source_list[], int number)
{
	int count;
	for (count = 0; count < number; count++)
		target_list[count] = source_list[count];
}

float average(float list[], int number)
{
	float total = 0;
	int count;
	for (count = 0; count < number; count++){
		total += list[count];
		return (total/number);
	}
}

float standard_deviation(int list[], int number)
{
	float av;
	float element_var[MAXIMUM_SIZE];
	int count;

	av = average(list, number);
	for (count = 0; count < number; count++)
		element_var[count] = (list[count] - av) * (list[count] - av);
	return sqrt(average(element_var, number));
	
}
