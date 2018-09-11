output :  card.o test_deck.o deck.o
	g++ card.O test_deck.o deck.o -o outputcard
test_card.o: test_deck.cpp
	g++ -c test_deck.cpp
card.O: card.cpp card.h deck.cpp deck.h
	g++ -c card.cpp deck.cpp

clean:
	rm *.o outputcard
