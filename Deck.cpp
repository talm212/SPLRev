//
// Created by talm212 on 21/11/16.
//
#include <stdio.h>

#include "Deck.h"


Card * Deck::fetchCard() {
	return &Deck::m_deck.back();
}

int Deck::getNumberOfCards() {

	return (int)Deck::m_deck.size();
}

string Deck::toString() {

	for (vector<Card>::reverse_iterator i = Deck::m_deck.rbegin();
		 i != Deck::m_deck.rend(); ++i ) {
		i->toString();
	}

}

Deck::Deck() {
	this->m_deck=vector<Card>();
}



