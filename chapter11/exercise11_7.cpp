#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;
using Families = map<string, vector<string>>;

Families make_famlies()
{
	Families fami;

	string last_name, child_name;

	for (; cout << "Please input last name: \n", cin>>last_name && last_name != "quit";)
		for (; cout << "Please input child_name: \n", cin>>child_name && child_name != "quit";)
			fami[last_name].push_back(child_name);


	return fami;
}

void print(Families& famis)
{
	for (auto& f : famis)
	{
		cout << "Family last_name: " << f.first << endl;
		for (auto& child : f.second)
		{
			cout << child << " ";
		}

		cout << endl;
	}
}

int main(int argc, char const *argv[])
{

	Families famis;

	famis = make_famlies();

	print(famis);
	return 0;
}