#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <conio.h>

#include "collector.hpp"

using namespace std;

Collector::Collector()
{
	// constructor
	coordX = 19;
	coordY = 15;
	grow = false;
	figure = "xxx";
	coords[0] = 20;
	coords[1] = 10;
}

Collector::~Collector()
{
	// deconstructor
}

void Collector::gotoXY(int x, int y)
{
	COORD coordinates;
	coordinates.X = x * 2;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

bool Collector::move()
{
	char ch;
label:

	// for boundries
	if (coords[0] <= 1)
		coords[0] = 1;
	if (coords[0] >= 39)
		coords[0] = 39;
	if (coords[1] <= 2)
		coords[1] = 2;
	if (coords[1] >= 24)
		coords[1] = 24;

	gotoXY(coords[0], coords[1]);
	std::cout << "xx";

	ch = _getch();
	switch (ch)
	{
	case 72: --coords[1];
		break;
	case 80: ++coords[1];
		break;
	case 77: ++coords[0];
		break;
	case 75: --coords[0];
		break;
	default: 
		break;
	}
	goto label;
	_getch();
}

void Collector::draw(bool grow) 
{
	move();
	gotoXY(coords[0], coords[1]);

	cout << figure << endl << endl;
}

