//Main (Modded for part 2)

#include <iostream>
#include "date.h"
#include "address.h"
#include "student.h"
#include <fstream>
#include <vector>

void loadStudents(std::vector<Student*>& students);
void printStudents(const std::vector<Student*>& students);
void showStudentNames(const std::vector<Student*>& students);
void findStudent(const std::vector<Student*>& students);
void delStudents(std::vector<Student*>& students);
int menu();

int main(){
	std::vector<Student*> students;
	loadStudents(students);
	int command = 0;
	do{
		command = menu();
	if (command == 1){
		showStudentNames(students);
	}
	else if (command == 2){
		printStudents(students);
	}
	else if (command == 3){
		findStudent(students);
	}
     } while (command != 0);
	deltStudents(students);
	return 0;
}

void loadStudents(std::vector<Student*>& students){
	std::ifstream file("students.csv");
	std::string line;
//File opening error (just in case)
	if(!file.is_open()){
		std::cout << "Issue opening the CSV file\n";
		return;
	}
	while  (std::getline(file, line)){
		Student* s = new Student(line);
		students.push_back(s);
	}
	file.close();
}
//Menu function & stuff
int menu(){
	std::cout << "\n1. Show all student names\n";
	std::cout << "2. Show all student data\n";
	std::cout << "3. Search for a student\n";
	std::cout << "0. Exit program\n";
	std::cout << "Enter command: ";

	int command = 0;
	std::cin >> command;
	return command;
}
//ShowStudentNames function 
void showStudentNames(const std::vector<Student*>& students){
	for (Student* s : students){
		std::cout << s->getLastFirst() << std:: endl;
	}
}
//PrintStudent function 
void printStudents(const std::vector<Student*>& students){
	for (Student* s : students){
		s->printStudent();
		std::cout << std::endl;
	}
}

void findStudent(const std::vector<Student*>& students){
	std::string last;
	std::cout << "Enter last name: ";
	std::cin >> last;
	for (Student* s : students){
		if (s->getLastName() == last) {
		   s->printStudent();
		   return;
		 }
	}
	std::cout << "Student not found.\n";
}

void delStudents(std::vector<Student*>& students){
	for (Student* s : students){
		delete s;
	}
	students.clear();
}
