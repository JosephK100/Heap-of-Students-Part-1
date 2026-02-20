//Date.h
//Guards
#ifndef date_h
#define date_h
#include <string>

class Date{
	private:
		std::string dob;
	public:
		Date();
		void init(std::string dob);
		void printDate() const;
};
#endif
