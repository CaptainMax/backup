#include "Trangle.h"

Trangle::Trangle(){

}
Trangle::Trangle(int newHeight){
	height  = newHeight;
}
Trangle::~Trangle(){

}
//Mutator
void Trangle::setHeight(int newHeight){
	height = newHeight;
}

//Accessor
int Trangle::getHeight() const{
	return height;
}

double Trangle::getArea(int base) const{
	return (0.5 * base * height);
}




