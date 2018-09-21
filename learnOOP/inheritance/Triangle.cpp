#include "Triangle.h"

//DEfault Consructor
Triangle::Triangle(){
	height = 0;
}

//Overload Triangle
Triangle::Triangle(int newHeight){
	height = newHeight;
}

//Accessor Function
int Triangle::getHeight() const{
	return height;
}

//Mutator Function
void Triangle::setHeight(int newHeight){
	height = newHeight;
}

//Destructor
Triangle::~Triangle(){

}
//getArea
double Triangle::getArea(int base) const{
	return(0.5 * base * height);
}
