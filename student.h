//Student.h
//Guards
#ifndef Student_h
#define Student_h
#include <string>
#include "address.h"
#include "date.h"
class Student{
	private:
		std::string firstName;
		std::string lastName;
		Address* address;
		Date* birthdate;
		Date* gradDate;
		int credits;
	public:
		Student(); //Student constructor
		Student(std::string line); //CSV constructor
		~Student(); //Student destructor

		void printStudent() const;
		std::string getLastFirst() const;
		std:: getLastFirst() const { return lastName; } 
};
#endif
