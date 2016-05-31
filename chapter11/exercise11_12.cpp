#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

void pair_test(vector<pair<string, int>>& v)
{
	pair<string, int> p;

	string s;
	int i;

	while (1)
	{
		cout << "Please input string and int value: " << endl;

		cin >> s;

		if (s == "quit")
			break;

		cin >> i;

		//p.first = s;
		//p.second = i;
		// v.push_back(p);

		v.push_back({s, i});
	}

}

void print_content(vector<pair<string, int>>& v)
{
	for (auto &item : v)
	{
		cout << "pair.first = " << item.first << " pair.second = " << item.second << endl;
	}
}


int main(int argc, char const * argv[])
{

	vector<pair<string, int>> v;

	pair_test(v);
	print_content(v);

	return 0;
}