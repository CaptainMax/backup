#ifndef __Deck_h
#define __Deck_h
#include "card.h"
#include <vector>
#include <exception>
class Deck{
private:
	vector<Card> deck;

public:
	Deck(int cards = 10);
	Card deal();
};
//class Deck_Empty : public exception{
//	public:
//		try{
//			if(deck.empty()){
//				throw 99; 
//			}	
//	
//		} catch(...){
//			cout << "Empty Card in your hand " << endl;
//		}
//};


#endif
