//Address.h
//Gaurds
#ifndef Address_h
#define Address_h
#include <string>

class Address{
	private:
		std::string street;
		std::string city;
		std::string state;
		std::string zip;
	public:
		Address();
		void init(std::string street,
				std::string city,
				std::string state,
				std::string zip;
		void printAddress() const;
		};
		#endif
