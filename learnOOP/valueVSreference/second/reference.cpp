#include <iostream>
#include <string>

using namespace std;


void value(int);
// value - passes parameter by value

void reference(int&);
// reference - passes parameter by reference
// @param int& number to be incremented

int main(){

	int num1 = 5;

	value(num1);

	cout << num1 << endl;
	
	reference(num1);
	cout << num1 << endl;
	return 0;

}

//Function definitions
void value(int num1){

	num1 += 5;
}

void reference(int& num1){
	num1 += 5;
}
