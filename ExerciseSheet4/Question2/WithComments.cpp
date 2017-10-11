#include <iostream>
#include <fstream>

using namespace std;

const int False = 0;
const int True = 1;

ifstream in_stream;
ofstream out_stream;
void copy_to(ifstream& in, ofstream& out);


int main()
{
	cout << "Testing: " << 16/2 << " = " << 4*2 << ".\n\n";
	
	ifstream in_stream;
	ofstream out_stream;

	in_stream.open("WithComments.cpp");
	out_stream.open("WithoutComments.cpp");

	copy_to(in_stream, out_stream);

	in_stream.close();
	out_stream.close();
	
	return 0;
}

void copy_to(ifstream& in, ofstream& out)
{
	const int False = 0;
	const int True = 1;

	char character;
	char character_after;
	int inside_comment = False;

	while(!in.eof())
	{	
		/* Test to see if a comment is starting */
		if (inside_comment == False && character == '/')
		{
			in_stream.get(character_after);
			if (character_after == '*')
				inside_comment = True;
			else 
				in_stream.putback(character_after);
		}
		/* Test to see if a comment is finishing */
		if (inside_comment == True && character == '*')
		{
			in_stream.get(character);
			if (character == '/')
			{
				inside_comment = False; /* set flag to 'False'*/
				in_stream.get(character);
			}
		}
		/* Ouput the character if it's not inside a comment */
		if (inside_comment == False)
		{
			out_stream.put(character);
			cout << character;
		}
		/* Get the next character, ready to repeat the process */
		in_stream.get(character);
	}
	
	in_stream.close();
	out_stream.close();

}
