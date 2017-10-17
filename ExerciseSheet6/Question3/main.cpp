#include <iostream>
#include <cstring>
using namespace std;

const int MAXIMUM_STRING_LENGTH = 80;

// removes repetitions from a string
void no_repetitions(char a[]);

// returns true if character appears in 'a' with an index less than 'stop'
bool appeared_previously(char character, char a[], int stop);

// removes the character with index 'start' from 'a'
// then decreases the indexes of all subsequent characters in 'a' by 1
void shuffle_up(char a[], int start);


int main()
{
	char a_string[MAXIMUM_STRING_LENGTH];
	cout << "Type in a string: ";
	cin.getline(a_string, MAXIMUM_STRING_LENGTH);
	cout << endl;
	
	no_repetitions(a_string);
	cout << "The string without repetitions is: " << a_string;

	return 0;
}

void no_repetitions(char a[])
{
	for (int count = strlen(a) - 1; count > 0; count --)
		if (appeared_previously(a[count], a, count))
			shuffle_up(a, count);
}

bool appeared_previously(char character, char a[], int stop)
{
	for (int count = 0; count < stop; count++)
		if (a[count] == character)
			return true;
	return false;
}

void shuffle_up(char a[], int start)
{
	int count = start;
	while (a[count] != '\0')
	{
		a[count] = a[count+1];
		count++;
	}
}

