#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <stdexcept>

#define RULES_FILE_NAME "rules.txt"
#define SOURCE_FILE_NAME "source_input.txt"

using namespace std;

map<string, string> buildMap(ifstream& rules)
{
	string key;
	string value;
	map<string, string> trans_map;

	while (rules >> key && getline(rules, value))
	{
		if (value.size() > 1) // 检查是否有转换规则
		{
			trans_map[key] = value.substr(1); // 去掉 Key 和 value 之间的空格
		}
		else {
			throw runtime_error("no rule for " + key);
		}
	}

	return trans_map;
}

string transform(map<string, string>& trans_map, string& word)
{
	auto p = trans_map.find(word);

	if (p != trans_map.end())
		return p->second; // 返回转换规则中替换的 string
	else
		return word; // 否则，返回原来的 string
}


void word_transform(ifstream& rules, ifstream& source_file)
{
	map<string, string> trans_map = buildMap(rules);

	string text;

	while (getline(source_file, text))
	{
		istringstream ss(text);
		string word;

		bool first_space = true;

		while (ss >> word)
		{
			if (first_space)
			{
				first_space = false;
			}
			else {
				cout << " "; // 在单词间打印一个空格
			}

			cout << transform(trans_map, word);
		}

		cout << endl;
	}

}



int main(int argc, char const *argv[])
{

	ifstream rules(RULES_FILE_NAME);
	ifstream source_input(SOURCE_FILE_NAME);

	word_transform(rules, source_input);

	return 0;
}