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
	if(myHand->getHead()== nullptr)
		return nullptr;
	else{
		Node *node=myHand->getHead();
		while(node->hasNext()) {
			node = node->getNext();
		}
		return node->getData();

	}
}

Card *Hand::getTheLowestCard() {
	if(myHand->getHead()== nullptr)
		return nullptr;
	else
		return myHand->getHead()->getData();
}

Card *Hand::getTheCardThatApearsTheMost() {
	int highestNumber=0;
	int currentCounter=0;
	Card* choosen= nullptr;
	if(myHand->getHead()== nullptr)
		return choosen;
	else{
		Node *current=myHand->getHead();
		Card *currentCard=myHand->getHead()->getData();
		choosen=current->getData();
		while(current!= nullptr) {
			if(current->getData()->greaterThen(currentCard)==0){ //if equals
				currentCounter++;
			}
			else{
				currentCounter=1;
				currentCard=current->getData();
			}
			if(currentCounter>=highestNumber){
				highestNumber=currentCounter;
				choosen=current->getData();
			}
			current = current->getNext();
		}
		return choosen;

	}

}

Card *Hand::getTheCardThatApersTheList() {
	int lowestNumber=0;
	int currentCounter=0;
	Card* chosen= nullptr;
	if(myHand->getHead()== nullptr)
		return chosen;
	else{
		Node *current=myHand->getHead();
		Card *currentCard=myHand->getHead()->getData();
		chosen=current->getData();
		while(current!= nullptr) {
			if(current->getData()->greaterThen(currentCard)==0){ //if equals
				currentCounter++;
			}
			else{
				if(currentCounter<lowestNumber) {
					lowestNumber = currentCounter;
					chosen = currentCard;
				}
				currentCounter = 1;
				currentCard = current->getData();
			}
			current = current->getNext();
		}
		return chosen;
	}
}

