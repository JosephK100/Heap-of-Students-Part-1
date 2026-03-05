#include <iostream>
#include "address.h"

//Base constructor
Address::Address(){
	street = "";
	city = "";
	state = "";
	zip = "";
}
//Initialize the address using values parsed from the CVS file
void Address::init(std::string street,
		std::string city,
		std::string state,
		std::string zip){
	this->street = street;
	this->city = city;
	this->state = state;
	this->zip = zip;
}
//Print address in two lines - street and city.
void Address::printAddress() const{
	std::cout << street << std::endl;
	std::cout << city << ", " << state << " " << zip << std::endl;
}
