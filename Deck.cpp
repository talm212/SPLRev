//
// Created by talm212 on 21/11/16.
//
#include "Deck.h"

//constructor return an empty deck
Deck::Deck() {
	this->m_deck=vector<Card*>();
}
//constructor return a deck full of 4 of each card from ace to i to king.
Deck::Deck(vector<Card*> cards) {
	this->m_deck=vector<Card*>();
	for(std::vector<Card*>::iterator it = cards.begin(); it != cards.end(); ++it) {
		m_deck.push_back(*it);
	}
}
Deck::~Deck() {
//destroy the card vector with in the deck.
	for(std::vector<Card*>::iterator it = m_deck.begin(); it != m_deck.end(); ++it) {
		delete *it;
	}
}
//might need some work on the asignment operator
Deck& Deck::operator=(const Deck&) {
	return *this;
}



Card * Deck::fetchCard() {
	return Deck::m_deck.back();
}

int Deck::getNumberOfCards() {

	return (int)Deck::m_deck.size();
}

string Deck::toString() {

	for (vector<Card*>::reverse_iterator i = Deck::m_deck.rbegin();
		 i != Deck::m_deck.rend(); ++i ) {
		(*i)->toString();
	}

}










