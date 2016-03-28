#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

	char ch;
	int aCount = 0 , eCount = 0, iCount = 0, oCount = 0, uCount = 0;

	cout << "Please input a char type data: " << endl;

	while (cin >> ch)
	{
		switch (ch)
		{
		case 'a':
		case 'A':
			++aCount;
			break;
		case 'e':
		case 'E':
			++eCount;
			break;
		case 'i':
		case 'I':
			++iCount;
			break;
		case 'o':
		case 'O':
			++oCount;
			break;
		case 'u':
		case 'U':
			++uCount;
			break;
		default:
			;
			break;
		}

		cout << "a  == " << aCount << endl;
		cout << "e == " << eCount << endl;
		cout << "i == " << iCount << endl;
		cout << "o ==" << oCount << endl;
		cout << "u == " << uCount << endl;

	}

	return 0;
}