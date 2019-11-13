#pragma once
#include <string>

using namespace std;

class Collector
{
public:
	Collector();
	~Collector();
	void draw(bool grow);
	bool move();
	void gotoXY(int x, int y);
private:
	int coordX;
	int coordY;
	bool grow;
	string figure;
	int coords [2];
	int x;
	int y;
};
