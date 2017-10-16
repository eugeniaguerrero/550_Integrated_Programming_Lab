#include <iostream>
using namespace std;

const int MAXIMUM_STRING_LENGTH = 80;

void string_sort(char a[]); 
int minimum_from(char a[], int position);
void swap(char& first, char& second);

int main()
{
	char a_string[MAXIMUM_STRING_LENGTH];
	cout << "Type in a string: ";
	cin.getline(a_string, MAXIMUM_STRING_LENGTH);
        string_sort(a_string);
	cout << "The sorted string is: " << a_string << endl;

	return 0; 
}

void string_sort(char a[])
{
	int count = 0;

	while (a[count] != '\0') 
	{
		swap(a[count], a[minimum_from(a, count)]);
		count++;
	}
}

int minimum_from(char a[], int position)
{
	int min_index = position;
	int count = position + 1;

	while (a[count] != '\0')
	{
		if  (a[count] < a[min_index])
			min_index = count;
		count++;
	}
	return min_index;
}

void swap(char& first, char& second)
{
	char temp = first;
	first = second;
	second = temp;
}

