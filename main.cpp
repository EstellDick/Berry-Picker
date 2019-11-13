#include <iostream>
#include <conio.h>
#include <cstdlib>

#include "matchfield.hpp"
#include "berry.hpp"
#include "berries.hpp"
#include "collector.hpp"

using namespace std;

int main() 
{
	Berries berries;
	Berry berry;
	Matchfield matchfield;
	Collector collector;

	berries.position();
	
	int number = 0;

	 //do {
		// cin >> number;
		//system("CLS");

		// Write heading
		cout << "Collect the berries! Use the arrow keys." << endl;

		matchfield.draw();
		berry.draw();

		collector.move();
		collector.draw(false);
		cout << endl;

	//} while (number != 3);

	
	return 0;
}
