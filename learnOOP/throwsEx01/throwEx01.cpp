#include <iostream>
using namespace std;

int main(){
	
	try{
		int monsAge = 50;
		int sonsAge = 34;
		
		if(sonsAge > monsAge){
			throw 99;
		}
		
	} catch(int x){
		cout <<"son can not be older than mom, ERROR number: " << x << endl;	
	}

}
