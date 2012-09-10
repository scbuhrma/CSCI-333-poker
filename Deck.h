#ifndef __Deck_H__
#define __Deck_H__

#include "Card.h"
#include <vector>

class Deck{
	private:
	std::vector<Card> deck;
	int top;

	public:
	Deck();
	Card* deal();
	void shuffle();
	void print();
};

#endif
