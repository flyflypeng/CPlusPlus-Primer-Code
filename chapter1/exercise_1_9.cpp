#include <iostream>

int main()
{
	int value, sum;
	value = 50;
	sum = 0;

	while (value <= 100)
	{
		sum += value;
		++value;
	}

	std::cout << "The sum from 50 to 100 equals  " << sum << std::endl;

	return 0;

}
