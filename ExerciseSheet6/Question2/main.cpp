#include <iostream>
using namespace std;

const int NO_OF_ELEMENTS = 5;

void selection_sort(int a[], int length);



int main()
{
	int list[NO_OF_ELEMENTS];
	int count;

	for (count = 0; count < NO_OF_ELEMENTS ; count++)
	{
		cout << "Enter value of element " << count << ": ";
		cin >> list[count];
	}

	cout << endl << endl;

	display_state(list, -1, NO_OF_ELEMENTS);

	selection_sort(list, NO_OF_ELEMENTS);

	return 0;
}


void selection_sort(int a[], int length)
{
	for (int count = 0; count < length - 1; count++)
	{
		swap(a[count], a[minimum_from(a, count, length)]);
		display_state(a, count, length);
	}
}

int minimum_from(int& first, int& second)
{
	int temp = first;
	first = second;
	second = temp;
}

void display_state(int a[], int stage, int length)
{
	cout << "STATE " << stage + 2 << ":" << endl << endl;
	for (int count = 0; count < length; count++)
