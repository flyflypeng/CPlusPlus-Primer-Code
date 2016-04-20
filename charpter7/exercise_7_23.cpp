#include "exercise_7_23.h"

int main(int argc, char const *argv[])
{

	Screen myScreen(5, 3);
	const Screen blank(5, 3);

	myScreen.set('#').display(std::cout);
	blank.display(std::cout);

	return 0;
}