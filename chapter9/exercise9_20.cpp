#include <iostream>
#include <deque>
#include <list>
#include <string>

using namespace std;

void print_deque(deque<int>& d)
{
	for (auto &elem : d)
		cout << elem << " ";

}

int main(int argc, char const *argv[])
{

	list<int> l{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	deque<int> odd, even;

	for (auto elem : l)
	{
		if (elem % 2 == 0)
			even.push_back(elem);
		else
			odd.push_back(elem);
	}

	cout << "odd deque: ";
	print_deque(odd);
	cout << endl;

	cout << "even deque: ";
	print_deque(even);
	cout << endl;

	return 0;
}