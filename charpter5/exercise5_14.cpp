#include <iostream>
#include <string>
#include <iterator>

using namespace std;

int main()
{

	string input;
	string result = "";
	unsigned count = 0;

	string prev = "";
	unsigned prev_count = 0;

	cout << "Please input a series of word!" << endl;

	while (cin >> input)
	{

		// process first input
		if (prev == "")
		{
			prev = input;
			prev_count = 1;
			result = prev;
			count = prev_count;
		}
		else
		{
			if (prev != input)
			{
				if (prev_count >= count)
				{
					result = prev;
					count = prev_count;
				}

				prev_count = 1;

			}
			else
			{
				++prev_count;
			}

			prev = input;
		}

	}

	// 最后退出时，prev 肯定是不等于 input，所以还需要执行下面的代码
	if (prev_count >= count)
	{
		result = prev;
		count = prev_count;
	}



	if (count <= 1 )
	{
		cout << "There is no continuous string appear!" << endl;
	}
	else {
		cout << "The most frequently appear word is: " << result << " times: " << count << endl;
	}

	return 0;
}