#include <iostream>
#include "statistics.h"

using namespace std;

int main(){

    double first_value, second_value, third_value, fourth_value;

    cout << "Enter a first value: ";
    cin >> first_value;
    cout << endl;

    cout << "Enter a second value: ";
    cin >> second_value;
    cout << endl;

    cout << "Enter a third value: ";
    cin >> third_value;
    cout << endl;

    cout << "Enter a fourth value: ";
    cin >> fourth_value;
    cout << endl;

    cout << "Average: " << average(first_value, second_value, third_value, fourth_value) << endl;
    cout << "Standard deviation: " << standard_deviation(first_value, second_value, third_value, fourth_value) << endl;

    return 0;

}