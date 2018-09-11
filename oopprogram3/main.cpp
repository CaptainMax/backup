#include <iostream>

using namespace std;
#include "deck.h"
#include "card.h"
int main(){
	for(int i = 0; i < 20 ; i ++){
		Card test;
		cout << test.card_to_string() << endl;

	}

}
