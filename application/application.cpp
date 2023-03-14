#include "../presentation/screens/Screens.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Screens* screens = new Screens();
	screens->Login();
	return 0;
}