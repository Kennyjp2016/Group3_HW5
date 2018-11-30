#include <iostream>
#include <fstream>
#include <string>
#include "util.h"
using namespace std;

const string FILE_TO_ENCODE = "zIpsun.txt";


/* The function checks to see if a file exists and can be written to
 *
 * Inputs
 *	file	a fstream reference
 *	name	the name of the file to be opened
 *
 * Outputs
 *	true	if the file was opened
 *	false	if the file cannot be opened
 */
bool canOpenFile (fstream &file, string name) {
	file.open (name, ios::in);
	if (file.fail())
		return false;
	else
		return true;
}

/* This function decodes the contents of a ASCII file with a simple Caesar Cypher
 * This is done by subtracting 12 from the values of ASCII and wrapping them within bounds
 * 0 to 255, the char displayed will be difference depending on system
 *
 * Inputs
 *	file	a fstream reference, it is the file to be decoded
 *
 * Outputs
 */
void decode (fstream &inFile) {
	fstream outFile;
	char ch;
	//open a file to print the output to. It will delete the contents of the file if it already exists
	outFile.open("decoded.txt", ios::out);

	inFile.get(ch);

	while (inFile) {
		ch -= 12;
		if ((int)ch < 0)
			ch -= 255;

		outFile.put(ch);
		cout << ch;
		inFile.get(ch);
	}

	cout << endl;
	outFile.close();

}

/* This function encodes the contents of a ASCII file with a simple Caesar Cypher
 * This is done by adding 12 to the values of ASCII and wrapping them within bounds
 * 0 to 255, the char displayed will be difference depending on system
 *
 * Inputs
 *	file	a fstream reference, it is the file to be encoded
 *
 * Outputs
 *	encode.txt
 */
void encode (fstream &inFile) {
	fstream outFile;
	char ch;
	//open a file to print the output to. It will delete the contents of the file if it already exists
	outFile.open("encoded.txt", ios::out);

	inFile.get(ch);

	while (inFile) {
		ch += 12;
		if ((int)ch > 255)
			ch -= 255;

		outFile.put(ch);
		cout << ch;
		inFile.get(ch);
	}

	cout << endl;
	outFile.close();

}

/* This function displays the contents of a file to the terminal
 *
 * Inputs
 *	file	a fstream reference
 */
/*
   void showContents (fstream &file) {
   string line;
   getline (file, line);

   while (file) {
   cout << line << endl;

   getline(file, line);
   }
   }
 */
/*
 * This is the driver for question 5
 */
void encodeDecode () {
	bool exit = false;
	while (!exit) {
		fstream dataFile;
		fstream inData;
		fstream outData;
		//display the contents of the file to be encoded
		if (canOpenFile (dataFile, FILE_TO_ENCODE)) {
			cout << "The Data to be encoded is:\n";
			showContents(dataFile);
			dataFile.close();
			cout << endl;

			//encode the file
			if (canOpenFile (inData, FILE_TO_ENCODE)) {
				cout << "The File is encoded as:\n";
				encode (inData);
				inData.close();
				cout << endl;
			} else {
				cout << "There was an error opining the file to write the encoded text to\n";
			}

			//decode the encoded file
			if (canOpenFile (outData, "encoded.txt")) {
				cout << "The File is decoded as:\n";
				decode (outData);
				outData.close();
				cout << endl;
			} else {
				cout << "There was an error opining the file to write the decoded text to\n";
			}
		} else {
			cout << "error opining file. it might not exist\n";
		}
		exit = exitPrompt();
	}
}
