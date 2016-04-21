#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{

	vector<string> text;
	string line_text;

	cout << "Please input some text information: " << endl;

	// input string data
	while (getline(cin, line_text))
	{
		text.push_back(line_text);
	}

	// 使用迭代器遍历 text 中的每个 string 对象，并将字符串中的小写字母全部变成大写
	for (auto it = text.begin(); it != text.end(); ++it)
	{

		for (auto &c : (*it))
		{
			if (!isupper(c))
			{
				c = toupper(c);
			}
		}
	}

	// text 向量中的内容
	for (auto data : text)
	{
		cout << data << endl;
	}

	return 0;
}