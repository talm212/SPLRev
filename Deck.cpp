//
// Created by talm212 on 21/11/16.
//
#include <algorithm>
#include <random>
#include "Deck.h"

//constructor return an empty deck
Deck::Deck() {
	this->m_deck=vector<Card*>();
}
//constructor return a deck full of 4 of each card from ace to i to king.
Deck::Deck(int i) {
for(int j=2;j<=i;j++){
	Card* clubCard= new NumericCard(j,Club);
	Card* diamondCard= new NumericCard(j,Diamond);
	Card* heartCard= new NumericCard(j,Heart);
	Card* spadeCard= new NumericCard(j,Spade);



}
}

Deck::~Deck() {
//destroy the card vector with in the deck.

}

//Deck& Deck::operator=(const Deck&) {
//	return *this;
//}



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

void Deck::shuffle() {
	auto engine = std::default_random_engine{};
	std::shuffle(std::begin(m_deck), std::end(m_deck), engine);
}









