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
	Deck(int i);//constructor that returns a deck with 4 of each card from 2 to i +jack, queen, king and ace.
	~Deck();
	//Deck& Deck::operator=(const Deck&);//asaignment operator

	Card* fetchCard();   //Returns the top card of the deck and remove it rom the deck
	int getNumberOfCards(); // Get the number of cards in the deck
	string toString(); // Return the cards in top-to-bottom order in a single line, cards are separated by a space ex: "12S QD AS 3H"
    void shuffle();//shuffle the deck
};

#endif
