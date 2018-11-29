#include <iostream>
#include <string>
#include <iomanip>
#include "util.h"

using namespace std;

const int FIRST_PLAY = -475; //'The Persions' performed 475 BC according to PBS
const int CURR_YEAR = 2018;

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
	cin.ignore();
	getline(cin, theater.title);
	cout << "Enter the director\n";
	getline(cin, theater.director);
	cout << "Enter the Actor's name who is playing the protagonist\n";
	getline(cin, theater.protagonist);
	cout << "Enter the Actor's name who is playing the antagonist\n";
	getline(cin, theater.antagonist);
	cout << "Enter the year the performance was first run\n";
	theater.year_first_run = goodIn(FIRST_PLAY, CURR_YEAR);
	cout << "Enter the runtime of the performance in minutes\n";
	theater.time_in_min = goodIn(FIRST_PLAY, CURR_YEAR);

	cls();
	return theater;
}

void printData(TheaterData theater) {
	cout << "\t" << theater.title << endl;
	cout << "Director\t\t\t" << theater.director << endl;
	cout << "Actor Playing the Protagonist\t" << theater.protagonist << endl;
	cout << "Actor playing the Antagonist\t" << theater.antagonist << endl;
	cout << "Year performance first ran \t" << theater.year_first_run << endl;
	cout << "Runtime\t\t\t\t" << theater.time_in_min << endl;

}

void theater() {
	bool exit = false;
	while (exit == false) {
		cls();
		vector<TheaterData> plays;
		int numPlays;
		cout << "How many plays do you have information for: ";
		numPlays = goodIn (0 , 1000);
		for (int i  = 0; i < numPlays; i++) {
			TheaterData temp;
			temp = getData();
			plays.push_back(temp);
		}

		for (int i = 0; i < plays.size(); i++) {
			printData(plays[i]);
		}

		exitPrompt();
	}

}
