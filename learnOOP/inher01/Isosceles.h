// head ==> child

#ifndef ISOSCELES_H
#define ISOSCELES_H

#include "Trangle.h"

class Isosceles : public Trangle{
	public:
		//deafult structor
		Isosceles();
		//overload structor
		Isosceles(int, int, int);
		//destructor
		~Isosceles();

		//accessor
		int getBase() const;
		int getSideOne() const;

		//mutator
		void setBase(int);
		void setSideOne(int);

		int getPerimeter() const;
		void print() const;
		
	private:
		int base;
		int sideOne;
};
#endif
