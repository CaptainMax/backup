#include <iostream>
#include <string>

using namespace std;

//function declearions
void value(int);
//value - passes parameter by value
//@param int - number in question
void reference(int&);
//refernce - passes parameter by reference
//@param int& - number to be incremented

void askUser(int&, string&);
//askUser - fill in score and name
// @param int& - the user's score
// @param string& - the user's name

void calculateOutcome(int, string);
//calculateoutcome

int main(){
	
	int num1 = 5;

	value(num1);

	cout << num1 << endl;
	
	reference(num1);
	cout << num1 << endl;

	int score;
	string name;
	askUser(score, name);
	calculateOutcome(score, name);
	
	return 0;
}

//function definitions
void value(int num){
	num += 5;
}

void reference(int& num){
	num += 5;
}

//function definitions
void askUser(int& newScore, string& newName){
	cout << "please type in your name: \n";
	cin >> newName;
	
	cout <<"Enter your grade: \n";
	cin >> newScore;
}

void calculateOutcome(int newScore, string newName){
	if(newScore >50){
		cout << "you did not fail!" << endl;	
	} else {
		cout << "you fail, " << endl;	
	}

}
