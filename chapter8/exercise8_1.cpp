#include <iostream>

using namespace std;

istream& read_from_stream(istream& input)
{
	string input_data;

	cout << "Please input data" << endl;

	while (!(input >> input_data).eof())
	{
		cout << "input data: " << input_data << endl;
	}

	cout << "read eof and exit reading loop" << endl;

	input.clear();
	cout << "clear state flag in input stream!" << endl;
	return input;
}

int main(int argc, char const *argv[])
{

	istream& is = read_from_stream(cin);
	cout << "is.rdstate(): " << is.rdstate() << endl;
	return 0;
}