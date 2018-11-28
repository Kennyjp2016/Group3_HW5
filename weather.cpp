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
	Weather weather1[12];
	cout << "Please enter the City or Region name" << endl;
	string region;
	cin.ignore();
	getline(cin, region);
	float total_hightemp = 0, total_t_rainfall = 0, total_low_temp = 0, total_avg_temp = 0;
	float yearly_high = -100, yearly_low = 150, avgMonthRain = 0;
	int high_temp_month, low_temp_month;
		int count = 0;
	while (count < 12) {
		cout << "Entering Data for month " << count + 1 << " of 12" << endl;
		weather1[count].location = region;
		
		cout << "What is the total rainfall for " << count + 1 << " in " << region << endl;
		weather1[count].t_rainfall = goodIn(0.0, numeric_limits<float>::max());
		total_t_rainfall = total_t_rainfall + weather1[count].t_rainfall;
		
		cout << "Enter the highest temperature for month " << count + 1 << endl;
		weather1[count].high_temp = goodIn(-100, 150);
		total_hightemp = total_hightemp + weather1[count].high_temp;
		
		cout << "Enter the lowest temperature for month " << count + 1 << endl;
		weather1[count].low_temp = goodIn(-100, 150);
		total_low_temp = total_low_temp + weather1[count].low_temp;
		
		cout << "Enter the average temperature for month " << count + 1 << endl;
		weather1[count].avg_temp = goodIn(weather1[count].low_temp, weather1[count].high_temp);
		total_avg_temp = weather1[count].avg_temp + total_avg_temp;
		count++;

	}

	// Finds the greatest values for the year

	count = 0;
	while (count < 12) {
		if (weather1[count].high_temp > yearly_high) {
			yearly_high = weather1[count].high_temp; 
			high_temp_month = count;
		}

		if (weather1[count].low_temp < yearly_low) {
			yearly_low = weather1[count].low_temp;
			low_temp_month = count;
		}
		count++;
	}

	total_avg_temp = total_avg_temp / 12;
	avgMonthRain = total_t_rainfall / 12;

	cout << "The total average rainfall per month for the year is " << total_t_rainfall << endl;
	cout << "The total rainfall for the year is " << total_t_rainfall << endl;
	cout << "The average temperature for the year is " << total_avg_temp << endl;
	cout << "The lowest temperature of the year is " << yearly_low << " degrees F and occured in month " << low_temp_month << endl;
	cout << "The highest temperature of the year is " << yearly_high << "degrees F and occured in month " << high_temp_month << endl;

	
	exitPrompt();

}