#include <iostream>

using namespace std;

enum Logical {True, False};

int valid_integer();
Logical is_prime(int integer);

int main()
{
    	int number;

    	cout << "This program will indicate whether an integer between 1 and 1000 is prime." << endl;

    	number = valid_integer();
	while (number != 0) {
    	cout << "The number " << number << " is ";
		if (!is_prime(number))
			cout << "not ";
		cout << "a prime between 1 and 1000" << endl << endl;
    	number = valid_integer();
	}
    return 0;
}
int valid_integer()
{ 
    int number;
    do {
	    cout << "Enter an integer between 1 and 1000 included or 0 to end the program: ";
	    cin >> number;
            if (number > 1000 || number < 0) 
                cout << "Invalid input, number out of range. Please try again." << endl;
    } while (number > 1000 || number < 0);
        
	return number;
}

Logical is_prime(int integer)
{
	for (int factor = 2; factor < integer; factor++) {
		if ((integer % factor) == 0)
			return False;
	}
	return True;
}
