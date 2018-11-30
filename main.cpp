/* ==============================================================================
 *	This file is the main file for Group 3's assignment 5
 *	due 11/30/18
 *
 *	James Conory
 *	John Kenny
 *	Carlene Farmer
 *	Sam Kershner
 * ============================================================================*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "questions.h"
#include "util.h"
using namespace std;

int main() {
	//get the system time for rand calls
	srand(time(NULL));
	bool exit = false;
	int select;
	while (exit == false) {
		//clear the window
		cls();
		cout << "This is Group 3's Assignment 5\n";
		cout << endl;
		cout << "\t1 Washington's Theater\n";
		cout << "\t2 Weather Statistics\n";
		cout << "\t3 Speakers' Bureau Info\n";
		cout << "\t5 Code Talkers\n";
		cout << "Enter your selection: ";
		select = goodIn(0, 5);

		switch (select) {
			case 1:
				theater();
				break;
			case 2:
				weatherStats();
				break;
			case 3:
				//speakersInfo();
				break;
			case 5:
				encodeDecode();
			case 0:
				return 0;;
				break;
			default:
				cout << "That input didn't work.\n";
				cout << "Please input the number by your selection";
				break;
		}
	}
	return 0;
}
