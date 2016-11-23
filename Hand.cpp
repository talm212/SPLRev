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
	return (int) this->myHand->size();
}

string Hand::toString() {
	map<string,Card*>::iterator iter;
	string ans;

	for(iter = this->myHand->begin(); iter!=this->myHand->end();iter++){
		ans.append(iter->first);
		ans.append(" ");
	}

	return ans;
}

bool Hand::removeCard(Card &card) {
	try {
		this->myHand->deleteCard()
	}catch (exception e){
		return false;
	}
	return true;
}


