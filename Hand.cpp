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
	return this->myHand->toString();
}

bool Hand::removeCard(Card &card) {
	try {
		this->myHand->deleteCard(card);
	}catch (exception e){
		return false;
	}
	return true;
}

Card *Hand::getTheGreatestCard() {
	if(myHand->head!= nullptr)
		return nullptr;
	else{
		Node *node=myHand->head;
		Node *next=node->getNext();
		while(next != nullptr) {
			node = next;
			next = node->getNext();
		}
		return node->getData();

	}
}

Card *Hand::getTheLowestCard() {
	if(myHand->head!= nullptr)
		return nullptr;
	else
		return myHand->head->getData();
}

Card *Hand::getTheCardThatApearsTheMost() {
	return nullptr;
}

Card *Hand::getTheCardThatApersTheList() {
	return nullptr;
}

