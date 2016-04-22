#include <iostream>
#include <deque>
#include <string>

using namespace std;

void print_deque(deque<string>& d)
{
	for (auto &elem : d)
		cout << elem << endl;
}

int main(int argc, char const *argv[])
{
	cout << "Please input a series of string......" << endl;

	deque<string> d;
	string input;
	while (cin >> input)
	{
		d.push_back(input);
	}

	cout << "Read ending......." << endl;

	print_deque(d);

	return 0;
}