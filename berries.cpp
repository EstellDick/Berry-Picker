#include "berries.hpp"

Berries::Berries()
{
}

Berries::~Berries()
{
}

void Berries::position()
{
	for (int i = 0; i != 30; ++i)
	{
		int random1 = rand() % 38 + 1;
		int random2 = rand() % 18 + 2;
		berryListX.push_back(random1);
		berryListY.push_back(random2);
	}
}

void Berries::remove(int xCoord, int yCoord)
{
	int size = berryListX.size();
	for (int k = 0; k != size; ++k)
	{
		int berryX = berryListX[k];
		int berryY = berryListY[k];

		if (berryX == xCoord && berryY == yCoord)
		{

		}
	}
}