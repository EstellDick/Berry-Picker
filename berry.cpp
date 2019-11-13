#include <iostream>
#include <windows.h>

#include "berry.hpp"
#include "berries.hpp"

Berry::Berry()
{
	// constructor
}

Berry::~Berry()
{
	// deconstructor
}

void Berry::gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x * 2;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void Berry::draw()
{
	Berries berries;
	berries.position();

	for (int j = 0; j != berries.berryListX.size(); ++j)
	{
		gotoxy(berries.berryListX[j], berries.berryListY[j]);
		std::cout << "O" << std::endl;
	}
}
