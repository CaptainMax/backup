#include <iostream>
#include <string>

using namespace std;

//constatns
const int CAPACITY = 5;

int main(){

	string colors[] = {"red","blue","yellow","orange","purple"};

	cout << "Color: " << colors[2] << endl;
	
	string cc[CAPACITY];
	int i = 0;
	int size = 0;
	string input;
	cout << "please type in the colors you want (-1 to stop): ";
	cin >> input;
	while((input != "-1") && (i <= CAPACITY)){
		size ++;
		cc[i] = input;
		i++;
		cin >> input;
	}
	int j;
	for(j = 0; j < size; j++){
		cout << "color #" << (j + 1) << " " << cc[j]; 
	}
	return 0;
}