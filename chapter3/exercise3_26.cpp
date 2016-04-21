#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{

	vector<int> int_vec(11, 0);
	int score;

	cout << "Please input score: " << endl;

	while (cin >> score)
	{
		auto it = int_vec.begin();

		if (score >= 0 && score <= 100)
		{
			int index = score / 10;
			(*(it + index))++;
		}
	}


	// 输出结果
	//
	for (auto data : int_vec)
	{
		cout << data << " ";
	}

	cout << endl;

	return 0;
}