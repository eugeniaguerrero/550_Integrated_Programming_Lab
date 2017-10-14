#include <iostream>
using namespace std;

void print_pyramid(int height);

int main()
{
	int pyramid_height;

	cout << "This program prints a 'pyramid' shape of" << endl;
	cout << "a specified height on the screen." << endl << endl;

	cout << "How high would you like the pyramid?  ";
	cin >> pyramid_height;
	while (pyramid_height > 30 || pyramid_height < 1)
	{
		cout << "Pick another height (must be between 1 and 30)";
		cin >> pyramid_height;
	}

	print_pyramid(pyramid_height);

	return 0;
}


void print_pyramid(int height)
{
	int line;
	int const MARGIN = 10;
	
	cout << endl << endl;

	for (line = 1; line <= height; line++)
	{
		int count;
		int total_no_of_spaces = MARGIN + height - line;

		for (count = 1; count <= total_no_of_spaces; count++)
			cout << " ";

		for (count = 1; count <= line * 2; count ++)
			cout << '*';

		cout << endl;

	}

	cout << endl << endl;
}
