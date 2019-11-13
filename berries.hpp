#pragma once
#include <vector>

class Berries
{
public:
	Berries();
	~Berries();
	void position();
	void remove(int xCoord, int yCoord);

	std::vector<int> berryListX;
	std::vector<int> berryListY;

private:

};
