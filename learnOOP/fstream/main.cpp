#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	
	ifstream inFile;
	inFile.open("hello.txt");

	//Check for error
	if(inFile.fail()){
		cerr << "Error opening File" << endl;
		exit(1);
	}
	
	string item;
	int count = 0;

	//Read a file until you are reached the end
	while(!inFile.eof()){
		inFile >> item;
			
		cout << item << endl;
		
	}


	return 0;
}
