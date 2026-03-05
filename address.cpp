#include <iostream>
#include "address.h"

Address::Address(){
	street = "";
	city = "";
	state = "";
	zip = "";
}
void Address::init(std::string street,
		std::string city,
		std::string state,
		std::string zip){
	this->street = street;
	this->city = city;
	this->state = state;
	this->zip = zip;
}
//Print address in an okay format
void Address::printAddress() const{
	std::cout << street << std::endl;
	std::cout << city << ", " << state << " " << zip << std::endl;
}
