//Date.h
//Guards
#ifndef date_h
#define date_h
#include <string>

class Date{
	private:
		int month;
		int day;
		int year;
	public:
		Date();
		void init(std::string dateString);
		void printDate() const;
};
#endif
