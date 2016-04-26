#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{

	vector<string> svec;

	svec.reserve(1024);

	string word = "haha";

	int i;
	for (i = 0; i < 1048; i++)
		svec.push_back(word);

	svec.resize(svec.size() + svec.size() / 2);

	cout << "After svec.resize() called: capacity = " << svec.capacity() << endl;

	return 0;
}