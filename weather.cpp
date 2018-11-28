#include <iostream>
#include "util.h"
#include <string>
#include <iomanip>
using namespace std;

struct Weather {
	string location;
	float t_rainfall;
	float high_temp;
	float low_temp;
	float avg_temp;
	   };



void weatherStats() {
	Weather weather1;
	weather1[12];
	cout << "Please enter the City or Region name";
	getline(cin, string region);
	float total_hightemp = 0, total_t_rainfall = 0, total_low_temp = 0, total_avg_temp = 0
	int count = 0;
	while (count < 12) {
		cout << "Entering Data for month " << count + 1 << "of 12" << endl;
		weather1(count).location = region;
		
		cout << "What is the total rainfall for " << count + 1 << " in " << region << endl;
		weather1(count).t_rainfall = goodin(0, numeric_limits<float>::max());
		total_t_rainfall = total_t_rainfall + weather1(count).t_rainfall;
		
		cout << "Enter the highest temperature for month" << count + 1 << endl;
		weather1(count).high_temp = goodIn(-100, 150);
		total_hightemp = totalhightemp + weather1(count).high_temp;
		
		cout << "Enter the lowest temperature for month" << count + 1 << endl;
		weather1(count).low_temp = goodIn(-100, 150);
		total_low_temp = total_low_temp + weather1(count).low_temp;
		
		cout << "Enter the average temperature for month" << count + 1 << endl;
		weather1(count).avg_temp = goodin(weather(count).low_temp, weather(count.high_temp));
		total_avg_temp = weather1(count).avg_temp + total_avg_temp;
		count++;

	}
	total_avg_temp = total_avg_temp / 12;
	avgMonthRain = total_t_rainfall / 12;
	total_hightemp = total_hightemp / 12;
	total_low_temp = total_low_temp / 12;

	cout << "The total average rainfall per month for the year is " << total_t_rainfall << endl;
	cout << "The total rainfall for the year is " << total_t_rainfall << endl;

	

}