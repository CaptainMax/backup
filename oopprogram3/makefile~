output :  card.o main.o deck.o
	g++ card.O main.o deck.o -o outputcard
test_card.o: main.cpp
	g++ -c main.cpp
card.O: card.cpp card.h deck.cpp deck.h
	g++ -c card.cpp deck.cpp

clean:
	rm *.o outputcard
