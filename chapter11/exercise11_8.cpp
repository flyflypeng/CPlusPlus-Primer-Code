#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	set<string> s;

	s = {"Hello", "My", "name", "is", "jpf", "is", "My"};

	for (const auto& item : s)
	{
		cout << item << " ";
	}

	cout << endl;

	return 0;
}