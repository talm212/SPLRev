//
// Created by talm212 on 23/11/16.
//
//#include "Player.h"


Card *Player::getTheCardThatApersTheList() {
	return nullptr;
}

string Player::getName() {
	return name;
}

void Player::removeCardsFromHand(vector<Card *> cards) {
	for(std::vector<Card*>::iterator it = cards.begin(); it != cards.end(); ++it) {
		Hand::removeCard(**it);
	}
}

void Player::addCardsToHand(vector<Card *> cards) {
	for (std::vector<Card *>::iterator it = cards.begin(); it != cards.end(); ++it) {
		Hand::addCard(**it);
	}
}

Card *Player::getTheGreatestCard() {
	return nullptr;
}

Card *Player::getTheLowestCard() {
	return nullptr;
}

Card *Player::getTheCardThatApearsTheMost() {
	return nullptr;
}


