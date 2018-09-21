#include <iostream>
#include <string>

#include "BMI.h"
using namespace std;

int main(){
	string name;
	int height;
	double weight;
	
	cout << "Eneter your name: ";
	cin >> name;
	cout << "Enter your height (int inches): ";
	cin >> height;
	cout << "ENter your weight (int pounds): ";
	cin >> weight;

	BMI Student_1(name, height, weight);

	cout << endl << "PatientName: " << Student_1.getName() << endl <<
		"Height: " << Student_1.getHeight() << endl <<
		"Weight: " << Student_1.getWeight() << endl;

	cout << endl;

	cout << "Eneter your name: ";
	cin >> name;
	cout << "Enter your height (int inches): ";
	cin >> height;
	cout << "ENter your weight (int pounds): ";
	cin >> weight;
	
	

	BMI Student_2;
	Student_2.setName(name);
	Student_2.setHeight(height);
	Student_2.setWeight(weight);
	cout << endl << "PatientName: " << Student_2.getName() << endl <<
		"Height: " << Student_2.getHeight() << endl <<
		"Weight: " << Student_2.getWeight() << endl <<
		"BMI: "	 << Student_2.calculateBMI() << endl;
	
	cout << endl << "Student_1 name: " << Student_1.getName() << endl;

	cout << endl;
	BMI Student_3;
	cout << endl << "Student_3 height: " << Student_3.getHeight() << endl;
	cout << endl << "Student_3 weight: " << Student_3.getWeight() << endl;

	return 0;
}
