#include "algorithm"
#include "Hand.h"

Hand::Hand() {
	this->myHand = new List();
}

Hand::~Hand() {
	delete(this->myHand);
}

bool Hand::addCard(Card &card) {
	try {
		this->myHand->addCard(card);
	}catch (exception e){
		return false;
	}
	return true;
}

int Hand::getNumberOfCards() {
	return (int) this->myHand->getSize();
}

string Hand::toString() {
	this->myHand->toString();
}

bool Hand::removeCard(Card &card) {
	try {
		this->myHand->deleteCard(card);
	}catch (exception e){
		return false;
	}
	return true;
}


