#include <cstdlib>
#include "card.h"


Card::Card(){
	 s = (Suit)(rand() % 3);
	 r = (rand() % 10);
}
Card::Card(Suit suit, Rank rank){
	s = suit;
	r = rank;
	
}
Card::Suit Card::getSuit(){
	
	return s;
}
Card::Rank Card::getRank(){
	return r;
}
string Card::card_to_string(){
	  string suit[3] = {"U","T","A"};
	  return suit[s] + to_string(r);
	  
}
