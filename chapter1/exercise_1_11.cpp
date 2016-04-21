#include <iostream>

int main()
{
	int num1, num2;

	std::cout << "请输入两个整数" << std::endl;

	std::cin >> num1 >> num2;

	int start_val, end_val;

	if (num1 > num2)
	{
		start_val = num2;
		end_val = num1;
	}
	if (num1 <= num2)
	{
		start_val = num1;
		end_val = num2;
	}

	int i = start_val + 1;

	while (i < end_val)
	{
		std::cout << i << std::endl;
		++i;
	}

	return 0;

}
