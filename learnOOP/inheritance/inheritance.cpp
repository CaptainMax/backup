#include <iostream>
#include "Isosceles.h"

using namespace std;

int main(){
	int base, height, equalSide;

	cout << "Please type in a base lenght: ";
	cin >> base;
	cout << "please type in the height: ";
	cin >> height;
	cout << "please type in the side that is equal: ";
	cin >> equalSide;
	
	Isosceles myTriangle(base, equalSide, height);

	cout << endl;
	myTriangle.printInfo();
	return 0;
	
}
