#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
	const char str1[] = "hello";
	const char str2[] = "woshijpf";
	const char str3[] = "world";


	list<const char *> ls = {str1, str2, str3};
	vector<string> vs;

	vs.assign(ls.cbegin(), ls.cend());

	for (auto &s : vs)
		cout << s << endl;

	return 0;
}