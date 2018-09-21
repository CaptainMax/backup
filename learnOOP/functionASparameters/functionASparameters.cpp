#include <iostream>
#include <string>

using namespace std;

//function decleartion
void askUserName(string&);
//askUserName - sets name of user
//@param string& - name of user

int askUserScore();
//askUserSCoer -sets credit score of user
//@return int - credit score of user

void print(string, int);
//print - print all the infroamtion
//@param string - name of user
//@param int - credit score of user

int main(){
	string name;
	
	askUserName(name);
	print(name, askUserScore());
	
	return 0;

}

//function definitions
void askUserName(string& newName){
	cout << "Eneter your name ";
	cin >> newName;
	cout << endl;
}

int askUserScore(){
	int score;
	cout << "Enter credit score: ";
	cin >> score;
	cout << endl;
	return score;
}
void print(string newName, int newScore){
	if(newScore >= 90){
		cout << "you get A" << endl;	
	} else if(newScore >= 80){
		cout << "you get B" << endl;	
	} else if(newScore >= 70){
		cout << "you get C" << endl;
	} else {
		cout << "bad" << endl;	
	}

}
