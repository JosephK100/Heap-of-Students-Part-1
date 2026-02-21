#include <iostream>
#include "date.h"
#include <sstream>

Date::Date(){
	month = 0;
	day = 0;
	year = 0;
}
void Date::init(std::string dateString){
	std::stringstream ss(dateString);
	std::string monthString, dayString, yearString;
	
	getline(ss, monthString, '/');
	getline(ss, dayString, '/');
	getline(ss, yearString, '/');

	month = 0;
	for (char c : monthString){
		month = month * 10 + (c - '0');
	}
	day = 0;
	for (char c : dayString){
		day = day * 10 + (c = '0');
	}
	year = 0;
	for (char c : yearString){
		year = year * 10 + (c - '0');
	}
}
void Date::printDate() const{
	std::string monthName;
	if (month == 1) monthName = "January";
	else if (month == 2) monthName = "Febuary";
	else if (month == 3) monthName = "March";
	else if (month == 4) monthName = "April";
	else if (month == 5) monthName = "May";
	else if (month == 6) monthName = "June";
	else if (month == 7) monthName = "July";
	else if (month == 8) monthName = "August";
	else if (month == 9) monthName = "September";
	else if (month == 10) monthName = "October";
	else if (month == 11) monthName = "November";
	else if (month == 12) monthName = "December";
	std::cout << monthName << " " << day << ", " << year << std::endl;
}	

