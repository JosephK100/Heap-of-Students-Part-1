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
void deflStudents(std::vector<Student*>& students);
int main();

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
     } While (command != 0);
	deltStudents(students);
	return 0;
}
