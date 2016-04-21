#include "exercise_7_23.h"

int main(int argc, char const *argv[])
{

	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(std::cout);
	std::cout << std::endl;

	myScreen.display(std::cout);
	std::cout << std::endl;

	Window_mgr w_mgr;

	w_mgr.clear(0);

	return 0;
}