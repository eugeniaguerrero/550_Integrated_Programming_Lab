#include <iostream>

using namespace std;

int main()
{
    int input_integer, valid_integer;
    bool is_prime;

    cout << "This program will indicate whether a prime number between 1 and 1000 is prime." << endl;
    cout << "Please input an integer: ";
    cin >> input_integer;

    valid_integer(input_integer);
    is_prime(input_integer);

    return 0;
}
int valid_integer(input_integer)
{
    while input_integer != 0 do {
        if input_integer > 1000 {
                cout << "Invalid input. The integer you inputted is larger than 1000. Please try again." << endl;
                return 0;
            } else if input_integer == 1 {
                cout << "1 is not prime."
                return 0;
            } else {
                return input_integer
            }
        }
}

bool is_prime(input_integer)
{

}