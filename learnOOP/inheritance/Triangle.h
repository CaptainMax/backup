// Header ==> Base/Prent Class

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
using namespace std;

class Triangle {
	public:
	//Default Constructor
	Triangle();
	
	//overload Constructor
	Triangle(int);
	
	//Accessor Function
	int getHeight() const;
		// getHeight - returns height of triangle
		// @return int - height of traingle

	// Mutator function
	void setHeight(int);
		// setHeight - sets height of triangle
		// @param int - height of triangle

	//Destructor
	~Triangle();

	//getArea
	double getArea(int) const;
		// getArea - returns are of triangle
		// @param int - base of triangle
		// @return double - are of triangle
	private:
	// Member Variables
	int height;

};

#endif
