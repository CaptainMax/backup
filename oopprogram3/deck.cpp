#include "deck.h"
#include "card.h"



//Deck::Deck_empty(){
	

//};
Deck::Deck(int cards){
	
	for(int i = 0; i < cards; i ++){
		deck.back();

	}
}
Card Deck::deal(){
	
		Card temp = deck.back();
		deck.pop_back();
		return temp;
	

	
}
