#include <iostream>
#include "Card.h"
#include "Deck.h"

using std::cout;
using std::endl;

int main(){
	cout<<"hello world!"<<endl;
	
	//Card c = new Card(2,4);
	//Card d = new Card(13,3);

	Deck* d = new Deck();
	d ->shuffle();

	d->print();

	return 0;
}

