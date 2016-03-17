#include <iostream>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
	string text_line;

	// read a line of text from standard input
	getline(cin, text_line);

	cout << "Read a line of text from cin: " << text_line << endl;

	// read a word from standard input
	string single_word;

	cin >> single_word;
	cout << "Read a word from cin: " << single_word << endl;

	return 0;
}