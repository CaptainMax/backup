//function 
#include <iostream>
#include <string>

using namespace std;

//Function: dataType nameOfFunction(){}

//function declarations
void welcomeMessage();
// welcomeMessage - prints a welcoming message

int calculateNum();
// calculateNUm - multiples two integers
// @return int - an integer that is the product of two other integer


int main(){
	welcomeMessage();
	int product = calculateNum();

	cout << product << endl;

	//save memory
	cout << calculateNum() << endl;
	return 0;
}

//function definitions
void welcomeMessage(){
	
	cout<<"This is function "<<endl;

}

int calculateNum(){
	int x = 5;
	int y = 6;
	return (x * y);
}