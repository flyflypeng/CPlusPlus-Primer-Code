#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

	//string grade[] = {"F", "D", "C", "B", "A", "A++"};

	cout << "Please input score: " << endl;

	int score;
	while (cin >> score)
	{
		if (score < 0)
		{
			cout << "Score < 0, Error!" << endl;
		}
		else {
			if (score < 60)
			{
				cout << "Score grade is F!" << endl;
			}
			else
			{
				if (score < 70)
				{
					cout << "Score grade is D!" << endl;
				}
				else
				{
					if (score < 80)
					{
						cout << "Score grade is C!" << endl;
					}
					else
					{
						if (score < 90)
						{
							cout << "Score grade is B!" << endl;
						}
						else {
							if (score < 100)
							{
								cout << "Score grade is A!" << endl;
							}
							else
							{
								if (score == 100)
								{
									cout << "Score grade is A++" << endl;
								}
								else
								{
									cout << "Score is not allowed to bigger than 100!" << endl;
								}
							}
						}
					}
				}
			}
		}
	}

	return 0;
}