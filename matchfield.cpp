#include <iostream>

#include "matchfield.hpp"

using std::cout;
using std::endl;

Matchfield::Matchfield()
{
	// constructor
	height = 25;
	width = 42;
}

Matchfield::~Matchfield()
{
	// deconstructor
}

void Matchfield::draw() 
{
	// Draw matchfield
	for (int i = 0; i != height; ++i) {
		for (int j = 0; j != width; ++j) {
			if (i == 0 || i == height - 1) {
				cout << "* ";
			}
			else if (j == 0 || j == width - 1) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

}
