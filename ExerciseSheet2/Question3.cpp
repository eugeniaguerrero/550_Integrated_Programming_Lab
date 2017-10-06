#include <iostream>

using namespace std;

int main()
{
	char character = 'a';

	cout << "Please enter a character (upper or lowercase): \n";
	cin >> character;
	cout << endl;
	
	if (character >= 97 && character <= 122) {
		cout << "The uppercase character corresponding to '" << character << "' is '";
		cout << static_cast<char>(character - 32) << "'." << endl;
	} 
	else if (character >= 65 && character <= 90) {
		cout << "The lowercase character corresponding to '" << character << "' is '";
		cout << static_cast<char>(character + 32) << "'." << endl;
	} else 
		cout << character << " is not a letter.\n";

	return 0;
}
