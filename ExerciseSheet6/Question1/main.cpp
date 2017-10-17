#include <iostream>
#include "IntegerArray.h"

using namespace std;

const int TEST_SIZE = 5;

int main() 
{
	int first_list[TEST_SIZE];
	int second_list[TEST_SIZE];

	cout << "Input the first list: " << endl;
	input_array(first_list, TEST_SIZE);
	cout << endl << "Input the second list: " << endl;
	input_array(second_list, TEST_SIZE);

	cout << endl << "Display of first list" << endl;
	display_array(first_list, TEST_SIZE);
	cout << endl << "Display of second list" << endl;
	display_array(second_list, TEST_SIZE);

	copy_array(first_list, second_list, TEST_SIZE);
	
	cout <<  endl <<"After copying: " << endl;
	
	cout << "Display of first list" << endl;
	display_array(first_list, TEST_SIZE);
	cout << endl << "Display of second list" << endl;
	display_array(second_list, TEST_SIZE);

	cout << endl << "The standard deviation of the first" << TEST_SIZE;
	cout << "elements of the second list is: ";
	cout << standard_deviation(second_list, TEST_SIZE);


	return 0;
}
