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

void Speakers(){
	speaker event1[10];
	int count = 0;
	while (count < 9);
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
	




}

