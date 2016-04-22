#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{

	vector<int> v;

	cout << "using at to access element in vector<int>" << endl;

	cout << v.at(0) << endl;

	cout << "using [] to access element in vector<int>" << endl;

	cout << v[0] << endl;

	cout << "using front() to access element in vector<int>" << endl;

	cout << v.front() << endl;

	cout << "using begin() to access element in vector<int>" << endl;

	cout << *(v.begin()) << endl;

	return 0;
}