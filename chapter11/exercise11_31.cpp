#include <iostream>
#include <string>
#include <map>

using namespace std;

int find_and_erase(multimap<string, string>& m, string element)
{

	int entries = m.count(element);

	if (entries == 0)
		return 0;

	auto p = m.find(element);

	while (entries)
	{
		m.erase(p);
		p++;
		--entries;
	}
	return 1;

}

void print(multimap<string, string>& authors)
{
	for (const auto &item : authors)
	{
		cout << item.first << " " << item.second << endl;
	}
}


int main(int argc, char const * argv[])
{

	multimap<string, string> authors;

	authors.insert({"Hellen", "Book_1"});
	authors.insert({"Hellen", "Book_2"});
	authors.insert({"Hellen", "Book_3"});
	authors.insert({"Frank", "Today"});
	authors.insert({"Frank", "tomorrow"});
	authors.insert({"Jemmy", "Fighting"});

	print(authors);

	int result = find_and_erase(authors, "Frank");

	if (result == 0)
		cout << "No item in multimap authors matched!" << endl;

	if (result == 1)
	{
		cout << "Find and erase item success!" << endl;
		print(authors);
	}


	return 0;
}
