#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	//Format: vector<DataType> nameOfVector
	//myVector.push_back(value) ==> adds an element to the End of the vector (also resizes it)
	//myVector.at(index) ==> return element at specified index number
	//myVector.size() ==> return an unsigned int equal top the number of element
	// myVector.begin() ==> reads vector from first element (index 0)
	// myVEctor.insert(myVector.begin() + integer, new value)  ==> adds element BEFORE specified number
	// myVector.erase(myVector.begin() + integer) ==> removes element AT specified index number	
 	// myVector.clear() ==> removes all elements in vector
	// myVector.empty() ==> returns boolean value if whether vector is empty

	vector<int> myVector;
 
	myVector.push_back(3);
	myVector.push_back(7);
	myVector.push_back(4);	
	myVector.push_back(12);
	myVector.push_back(9);
	cout << "Vector: ";
	
	for(unsigned int i = 0; i < myVector.size(); i++){
		cout << myVector[i] << " ";
	}
	cout << endl;
	
	myVector.insert(myVector.begin() + 3, 5);
	cout <<"Vector: ";
	for(unsigned int i = 0; i < myVector.size(); i++){
		cout << myVector[i] << " ";
	}
	cout << endl;
	
	myVector.erase(myVector.begin() + 4);
	cout << "Vector: ";
	for(unsigned int i = 0; i < myVector.size(); i++){
		cout << myVector[i] << " ";
	}
	//cout << endl;

	if(myVector.empty()){
		cout << endl << "is Empty!";	
	} else {
		cout << endl << "Is not Empty";
	}	

	myVector.clear();
	if(myVector.empty()){
		cout << endl << "is Empty!";	
	} else {
		cout << endl << "Is not Empty";
	}
	cout << endl;
	return 0;
}
