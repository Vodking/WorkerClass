#include "Starter.hpp"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	Worker anton;
	Worker william;
	Worker nurbek;
	anton.InputInfo();
	william.InputInfo();
	nurbek.InputInfo();

	anton.SaveInfo();
	william.SaveInfo();
	nurbek.SaveInfo();

	ReadFile();

	return 0;
}