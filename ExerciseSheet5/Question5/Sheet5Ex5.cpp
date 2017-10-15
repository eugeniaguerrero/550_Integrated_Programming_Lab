#include <iostream>
#include <fstream>

using namespace std;

int count_character(char letter);

int main()
{
  char letter;

  cout.setf(ios::left);

  cout.width(19);
  cout << "CHARACTER";
  cout << "OCCURENCES" << endl << endl;

  // Cycles through letters a-z, is used with count_character function
  for (letter = 'a'; letter <= 'z'; letter++){
    cout.width(19);
    cout << letter;
    cout << count_character(letter) << endl;
  }

  return 0;
}

int count_character(char letter){
  char character;
  ifstream in_stream;

  in_stream.open("Sheet5Ex5.cpp");
  in_stream.get(character);

  int count;
  for (count = 0; ! in_stream.fail(); in_stream.get(character)) {
    if (character == letter)
      count++;
  }
  in_stream.close();

  return count;
}
