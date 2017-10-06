#include <iostream>
using namespace std;

int main(){
	int year_now, month_now, age_now, birth_month, another_year, another_month;
	int total_years, total_months;
	int age_now_in_months, extra_months_from_now;

	cout << "Enter the current year, then press RETURN.\n";
	cin >> year_now;

	cout << "Enter the current month (a number from 1 to 12).\n";
	cin >> month_now;

	cout << "Enter your current age in years.\n";
	cin >> age_now;

	cout << "Enter the month in which you were born (a number from 1 to 12)\n";
	cin >> birth_month;

	cout << "Enter the year for which you wish to know your age.\n";
	cin >> another_year;

	cout << "Enter the month in this year.\n";
	cin >> another_month;
	cout << "\n";

	age_now_in_months = (age_now * 12) + (month_now - birth_month);
	if ((month_now - birth_month) < 0)
		age_now_in_months = age_now_in_months + 12;

	extra_months_from_now = ((another_year * 12) + another_month) - ((year_now * 12) + month_now);

	total_years = total_months / 12;

	if (total_months > (150 * 12)) {
		cout << "Sorry, but you'll probably be dead by ";
		cout  << another_month << "/" << another_year << "!\n";
	} else if (total_months >= 0) {
		cout << "Your age in " << another_month << "/" <<  another_year << ": ";
		cout << total_years << "year";
		if (total_years != 1)
			cout << "s";
		cout << "and" << total_months % 12 << " month";
		if ((total_months % 12) != 1)
			cout << "s";
			cout << ".\n";
	} else {
		cout << "You weren't even born in ";
		cout << another_month << "/" << another_year << "!\n";
	}
	return 0;
}
