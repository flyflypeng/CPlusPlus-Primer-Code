#include <iostream>

int main()
{
	int a, b;
	a = 1, b = 2;


	if (a < b)
	{
		std::cout << "a < b" << std::endl;
	}
	if (a > b)
	{
		std::cout << "a > b" << std::endl;
	}
	if (a == b)
	{
		/*
		std::cout << "a != b" << std::endl;
		*/
		std::cout << "a == b" << std::endl;
	}

	std::cout << "Hello World!" << std::endl;

	// for test exercise_1_8
	std::cout << "/*" << std::endl;

	std::cout << "*/" << std::endl;

	std::cout << /*"*/" */ " << std::endl;
	std::cout << /* "*/"  /* "/*" */ << std::endl;

	return 0;

}
