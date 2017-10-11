#include <iostream>
#include <fstream>
using namespace std;

void copy_to(ifstream& in); 

int main()
{
	ifstream in_stream;

	in_stream.open("Question1.cpp");
	copy_to(in_stream);
	in_stream.close();

	return 0;
}

void copy_to(ifstream& in)
{
	char character;

	in.get(character);
	while (!in.eof())
	{
		cout << character;
		in.get(character);
	}
}
