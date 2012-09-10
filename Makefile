CC = g++
CFLAGS = -Wall -Wextra -Werror 

test: cardtest.cpp Card.o Deck.o
	$(CC) $(CFLAGS) -o test cardtest.cpp Card.o Deck.o

Card.o: Card.h card.cpp
	$(CC) $(CFLAGS) -c Deck.cpp

Deck.o: Deck.h Deck.cpp Card.o
	$(CC) $(CFLAGS) -c Deck.cpp

clean:
	rm -f *~
	rm -f *.o
	rm -f test
