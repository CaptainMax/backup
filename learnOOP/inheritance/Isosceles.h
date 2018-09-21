//Header ==> Derived/Child Class

#ifndef ISOSCELES_H
#define ISOSCELES_H

#include <iostream>
#include "Triangle.h"
using namespace std;

class Isosceles : public Triangle{
	public:
		//Default Constructor
		Isosceles();

		//Overload Constructor
		Isosceles(int, int, int);
		
		//Accessor Function
		int getBase() const;
			//getBase - return base of triangle
			//@return int - base length of triangle

		int getSideOne() const;
	
		//Mutator Function
		void setBase(int);
			//setBase - sets base length of triangle
			//@param int - base length of triangle

		void setSideOne(int);
			//setSideONe - sets 
		
		//Destructor
		~Isosceles();

		int getPerimeter() const;
			// getPerimeter - returns perimeter of triangle
			// @return int - perimeter of triangle

		void printInfo() const;
			// printInfo - prints the perimeter and area of triangle

	private:
		// Member Variables
		int base;
		int sideOne;
		

};
#endif
