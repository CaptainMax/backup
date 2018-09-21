// Header ==> function declarations
#include <iostream>
#include <string>

using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI {
	public:
		//default constructor
		BMI();

		//overload constructor
		BMI(string, int, double);

		//destructor
		~BMI();

		//Accessor functions
		string getName() const;
		//getName - return name of patient

		int getHeight() const;
		//getHeight - return height of patient
		
		double getWeight() const;
		//getWeight - return weight of patient

		//if not modify with variable use const;
		//string getSomething() const;

		//Mutator functions
		void setName(string);
			//setName - sets name of patient
			//@param string - name of patient
		void setHeight(int);
			//setheight - sets height of patient
			// @param int - height of patient
		void setWeight(double);
			//setweight - set weight of paitent
			//@param double - weight of paitent

		double calculateBMI();
			// calculateBMI - calculates BMI of patient
			// @return double - BMI of student
	
	private:
		//memeber variable
		string newName;
		int newHeight;
		double newWeight;
	
};

#endif
