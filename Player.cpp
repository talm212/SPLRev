//
// Created by talm212 on 23/11/16.
//
#include "Player.h"



#include "Card.h"
#include "Player.h"


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

Player::Player(const string &name): name(name) {

}


PlayerType1::PlayerType1(const string &name) : Player(name) {}

PlayerType2::PlayerType2(const string &name) : Player(name) {

}

PlayerType3::PlayerType3(const string &name) : Player(name) {

}

PlayerType4::PlayerType4(const string &name) : Player(name) {

}


