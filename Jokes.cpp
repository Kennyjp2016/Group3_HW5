/* This program displays the contents of two text files; a jokes file and a punchline file.
 * The entire contents of the joke file is displayed, but the punch line file contains a bunch of garbage.
 * Only the contents proceeded by the word 'garbage' is displayed from the punch line file.
 */

#include <fstream>
#include <iostream>
#include <string>
#include "util.h"
using namespace std;

const string JOKES = "jokes.txt";
const string PLINE = "punchLine.txt";

/* This function reads a file word by word until it finds a specified word.
 * Once that word is found it prints out everything following that word
 *
 * Inputs
 *	file	a reference to a fstream object
 *	word	a string that the function prints everything following it
 */
void printAfterWord (fstream &file, string word) {
	string tempword;
	bool wordFound = false;
	while (file >> tempword) {
		if (tempword == word) {
			wordFound = true;
			getline(file, tempword);
			while (file) {
				cout << tempword << endl;
				getline(file, tempword);
			}
		}
	}
	if (!wordFound)
		cout << "The word was not found" << endl;
}

/* The Driver */
void tellMeAJoke () {
	bool exit = false;
	while (!exit) {
		cls();
		fstream jokes;
		fstream pLine;
		jokes.open(JOKES, ios::in);
		pLine.open(PLINE, ios::in);
		if (jokes) {
			showContents(jokes);
		} else {
			cout << "Could not open " << JOKES << endl;
		}
		if (pLine) {
			printAfterWord(pLine, "garbage");
		} else {
			cout << "Could not open " << PLINE << endl;
		}
		exit = exitPrompt();
	}

}
