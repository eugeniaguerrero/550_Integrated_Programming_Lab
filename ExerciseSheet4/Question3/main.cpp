#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char character;
	char previous_character;
	int character_count;

	ifstream in_stream;

	in_stream.open("main.cpp");
	
	in_stream.get(character);
	for(character_count = 0 ; ! in_stream.eof() ; )
	{
		character_count++;
		previous_character = character;
		in_stream.get(character);
	}
	in_stream.close();

	cout << "The total number of characters in 'Question3.cpp' is: ";
	cout << character_count << endl;
	
	if (character_count > 1)
		cout << "The last character is '" << previous_character << "'" << endl; 

	return 0;	
}
