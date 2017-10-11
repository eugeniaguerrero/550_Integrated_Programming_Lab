#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream in_stream;

	in_stream.open("Sheet5Ex5.cpp");
	
	if (!in_stream) {
		cerr << "Unable to open file Sheet5Ex5.cpp";
		return 0;
	} else 
	{	
	int table_header();
	while (in_stream){

	}	
	return 0;
	}
}

int table_header()
{
	std::cout.width(10);	
	cout << "CHARACTER";
	std::cout.width(17);
	cout << "OCCURENCES" << endl;	
}

int table_body()
{
	while (in_stream)
}
