//header

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Student{
	public:
	//Default Constructor
	Student();
	
	//overload Constructor
	Student(string, char);

	//Desctructor
	~Student();

	//Accessor Function
	string getName() const;
		//getName
		//@return string - name of student

	char getGrade() const;
		//getGrade
		//@return char - grade of student
	
	//Mutator Function
	void setName(string);
		//set name 
		//@param string - set name of student

	void setGrade(char);
		//set char
		//@param char - set the grade of student

	private:
	//member vairables
	string newName;
	char newGrade;

};



#endif
