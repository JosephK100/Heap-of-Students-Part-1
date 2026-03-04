//Student.cpp
#include "student.h"
#include <iostream>
#include <sstream>

//Constructor 
Student::Student(){
	firstName = "";
	lastName = "";
	address = new Address();
	birthdate = new Date();
	gradDate = new Date();
	credits = 0;
}
//CSV constructor 
Student::Student (std::string line){
	std::stringstream ss(line);
	std::string street, city, state, zip;
	std::string dobString, gradString, creditsString;
//Get line for first and last name.
	getline(ss, firstName, ',');
	getline(ss, lastName, ',');
//Get line for place of residence.	
	getline(ss, street, ',');
	getline(ss, city, ',');
	getline(ss, state, ',');
	getline(ss, zip, ',');
//Get line for dob, graduation date, and credits held.
	getline(ss, dobString, ',');
	getline(ss, gradString, ',');
	getline(ss, creditString,v',');
//Initialize 
	address = new Address();
	address->init(street, city, state, zip);

	birthdate = new Date();
	birthdate->init(dobString);

	gradDate = new Date();
	gradDate->init(gradString);

	credits = std::stoi(creditsString);
}

//Destructor
Student::~Student(){
	delete address;
	delete birthdate;
	delete gradDate;
}
//Print student function
void Student::Student() const{
	std::cout << firstName << " " << lastName << std::endl;
	address->printAddress();
	birthdate->printDate();
	gradDate->printDate();
	std::cout << "Credits: " << credits << std::endl;
	std::cout << "____________________________________" << std::endl;
}
//Execute the LastFirst function
std::string Student::getLastFirst() const{
	return lastName + ", " + firstName;
}
