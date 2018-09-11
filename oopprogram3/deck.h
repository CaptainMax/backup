#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <vector>
#include <exception>

class Deck{
private:
	vector<Card> deck;
	

public:
	Deck(int cards = 10);
	Card deal();
	class Deck_Empty : public exception{
		
	};
};



#endif
