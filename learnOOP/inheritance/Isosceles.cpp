#include "Isosceles.h"

Isosceles::Isosceles(){

}

Isosceles::Isosceles(int newBase, int newSideOne, int newHeight)
	: Triangle(newHeight){
	base = newBase;
	sideOne = newSideOne;
}

//Accessor Function
int Isosceles::getBase() const{
	return base;
}
int Isosceles::getSideOne() const{
	return sideOne;
}

//Mutator Function
void Isosceles::setBase(int newBase){
	base = newBase;
}
void Isosceles::setSideOne(int newSideOne){
	sideOne = newSideOne;
}

//Desctructor
Isosceles::~Isosceles(){

}

int Isosceles::getPerimeter() const{
	return ((2*sideOne) + base);
}

void Isosceles::printInfo() const{
	cout << endl << "Perimeter: "<< getPerimeter() << endl;
	cout << "Area: " << getArea(base) << endl;
}