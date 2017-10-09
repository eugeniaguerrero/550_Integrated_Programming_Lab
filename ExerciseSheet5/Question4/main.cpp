#include <iostream>
using namespace std;

enum Day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int closing_time(Day day_of_the_week);
int print_day(Day day_of_the_week);

int main()
{
    int count;

    cout.setf(ios::left);
    cout.width(17);
    cout << "DAY";
    cout << "CLOSING TIME\n\n";

    for (count = static_cast<int>(Sun) ; count <= static_cast<int>(Sat) ; count++)
    {
        cout.width(19);
//        switch (count)
        cout << print_day(static_cast<Day>(count), cout);
        cout << closing_time(static_cast<Day>(count)) << "pm\n";
    }
    return 0;
}

int print_day(Day day_of_the_week)
{
        switch (count)
            {
            case Sun: cout << "Sunday"; break;
            case Mon: cout << "Monday"; break;
            case Tue: cout << "Tuesday"; break;
            case Wed: cout << "Wednesday"; break;
            case Thu: cout << "Thursday"; break;
            case Fri: cout << "Friday"; break;
            case Sat: cout << "Saturday"; break;
            }
}

int closing_time(Day day_of_the_week)
{
    return 5;
}