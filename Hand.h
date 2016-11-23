#ifndef HAND_H_
#define HAND_H_

#include <iostream>
#include <map>

#include "Card.h"
#include "List.h"

using namespace std;

class Hand {
private:
	List *myHand;
public:
	Hand();
	~Hand();
	bool addCard(Card &card);
	bool removeCard(Card &card);
	int getNumberOfCards(); // Get the number of cards in hand
	Card* getTheGreatestCard();
	Card* getTheLowestCard();
	Card* getTheCardThatApearsTheMost();
	Card* getTheCardThatApersTheList();string toString(); // Return a list of the cards, separated by space, in one line,in a sorted order, ex: "2S 5D 10H"

};



#endif
