#include <iostream>
#include <fstream>

using namespace std;

int character_count();
char character_at_location(int number);

int main()
{
	int count;
	int number;

	count = character_count();

	for(number = count; number > 0; number--)
		cout << character_at_location(number);

	return 0;
}


int character_count()
{
	char ch;
	int count;

	ifstream in_stream;

	in_stream.open("main.cpp");
	in_stream.get(ch);
	for(count = 0; ! in_stream.eof() ; count++)
	{
		in_stream.get(ch);
	}
	in_stream.close();

	return count;
}


char character_at_location(int number)
{
	char ch;
	ifstream in_stream;

	in_stream.open("main.cpp");

	for(int i=0; i < number; i++){
		in_stream.get(ch);
	}

	in_stream.close();

	return ch;
}
