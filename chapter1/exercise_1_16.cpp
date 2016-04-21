#include <iostream>

int main()
{
	int value, sum;
	sum = 0;

	std::cout << "请开始输入整数" << std::endl;

	while (std::cin >> value)
	{
		sum += value;
	}

	std::cout << "所有整数的和等于: " << sum << std::endl;

	return 0;

}
