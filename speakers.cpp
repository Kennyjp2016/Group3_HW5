#include <iostream>
#include "util.h"
#include <string>
#include <iomanip>
using namespace std;

struct speaker {
	string name;
	string email;
	string phone_number;
	string topic;
	int fee;
};

void Speakers() {
	bool isValidEmail = false;
	speaker event1[10];
	int count = 0;
	while (count < 9){
	cout << "Please enter a speakers name" << endl;
	cin.ignore();

	getline(cin, event1[count].name);
	cout << "Please enter their topic" << endl;

	getline(cin, event1[count].topic);
	cout << "Please enter their fee" << endl;

	event1[count].fee = goodIn(0, 2147483647);
	cout << "Please enter their phone number" << endl;

	getline(cin, event1[count].phone_number);
	while (event1[count].phone_number.length != 10) {
		cout << "Please enter a valid 10 digit phone number including the 1" << endl;
		getline(cin, event1[count].phone_number);
	}

	cout << "Please enter their email address" << endl;
	getline(cin, event1[count].email);

	while (!isValidEmail) {
		string *atlocation;
		atlocation = strstr(event1[count].email, '@')
	}

	count++;
	}
	int input;

	int count1 = 0;
	bool leave = true;
	while (!leave) {
		cout << "Please enter the number for which speaker you would like to see more info for" << endl;
		input = goodIn(0, 10);
		while (count1 < 9) {
			int input;
			cout << count1 + 1 << "\t" << event1[count1].name << endl;
			count1++;
		}
		cout << event1[input].name << endl << event1[input].phone_number << endl << event1[input].email << endl << event1[input].topic << event1[input].fee << endl;

		 leave = exitPrompt();
	}
}

