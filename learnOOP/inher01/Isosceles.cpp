#include "Isosceles.h"
Isosceles::Isosceles(){

}
Isosceles::Isosceles(int newHeight, int newBase, int newSideOne)
	: Trangle(newHeight){
		base = newBase;
		sideOne = newSideOne;
}	
Isosceles::~Isosceles(){

}

int Isosceles::getBase() const{
	return base;
}
int Isosceles::getSideOne() const{
	return sideOne;
}
void Isosceles::setBase(int newBase){
	base = newBase;
}
void Isosceles::setSideOne(int newSideOne){
	sideOne = newSideOne;
}

int Isosceles::getPerimeter() const{
	return ((2 * sideOne) + base);
}
void Isosceles::print() const{
	cout << endl << "Permieter is: " << getPerimeter() << endl;
	cout << "Area is: " << getArea(base) << endl;
}

