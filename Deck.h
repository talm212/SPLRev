#ifndef DECK_H_
#define DECK_H_

#include <iostream>
#include "Card.h"
#include <vector>

using namespace std;

class Deck {
private:
	// Declare here the collection of "Card *" of the deck
	vector<Card*> m_deck;
public:
	Deck();//constructor that returns an empty deck
	Deck(vector<Card*> cards);//constructor get a vector of cards pointers and push them in to the deck m_vector property.
	~Deck();
	Deck& operator=(const Deck&);//asaignment operator

	Card* fetchCard();   //Returns the top card of the deck and remove it rom the deck
	int getNumberOfCards(); // Get the number of cards in the deck
	string toString(); // Return the cards in top-to-bottom order in a single line, cards are separated by a space ex: "12S QD AS 3H"
	
};

#endif
