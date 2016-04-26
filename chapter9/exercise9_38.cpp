#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v;

	cout << "Before push_back(): size = " << v.size() << endl;
	cout << "Before push_back(): capacity = " << v.capacity() << endl;

	for (int i = 0; i < 10; i++)
		v.push_back(i);

	cout << "After push_back(): size = " << v.size() << endl;
	cout << "After push_back(): capacity = " << v.capacity() << endl;


	for (int i = v.size(); i != v.capacity(); i++)
		v.push_back(i);

	cout << "After push_back() to fill capacity: size = " << v.size() << endl;
	cout << "After push_back() to fill capacity: capacity =  " << v.capacity() << endl;

	v.push_back(100);


	cout << "Exceed capacity: size = " << v.size() << endl;
	cout << "Exceed capacity: capacity =  " << v.capacity() << endl;

	return 0;
}