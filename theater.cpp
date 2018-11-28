#include <iostream>
#include "util.h"
#include <string>
#include <iomanip>
using namespace std;

struct TheaterData
{
	string title;
	string director;
	string protagonist;
	string antagonist;
	int year_first_run;
	int time_in_min;
};

TheaterData getData() {
	TheaterData theater;
	cout << "Enter a play or a musical title\n";
	getline(cin, theater.title);
	cout << "Enter the director\n";
	getline(cin, theater.director);
	cout << "Enter the Actor's name who is playing the protagonist\n";
	getline(cin, theater.protagonist);
	cout << "Enter the Actor's name who is playing the antagonist\n";
	getline(cin, theater.antagonist);
	cout << "Enter the year the performance was first run\n";
	theater.year_first_run = goodIn(0, 2147483647);
	cout << "Enter the runtime of the performance in minutes\n";
	theater.time_in_min = goodIn(0, 2147483647);

	return theater;
}

void printData(TheaterData theater) {
	cout << theater.title << endl;
	cout << "Director\t\t\t" << theater.director << endl;
	cout << "Actor Playing the Protagonist\t" << theater.protagonist << endl;
	cout << "Actor playing the Antagonist\t" << theater.antagonist << endl;
	cout << "Year performance first ran \t" << theater.year_first_run << endl;
	cout << "Runtime\t\t\t\t" << theater.time_in_min << endl;

}
void theater() {
	TheaterData theater1;
	TheaterData theater2;

	theater1 = getData();
	theater2 = getData();
	
	printData(theater1);
	printData(theater2);

	exitPrompt();

}