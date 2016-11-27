
#include <vector>
#include "List.h"

Node::Node(Card &card, Node *next1, Node *back1): data(&card),next(next1),back(back1){
}

Node::~Node() {
}

Card* Node::getData() {
	return this->data;
}

void Node::setNext(Node *next) {
	this->next = next;
}

Node *Node::getNext(){
	return next;
}

Node *Node::getBack(){
	return back;
}

void Node::setData(Card *data) {
	this->data = data;
}

void Node::setBack(Node* back) {
	this->back =back;
}

bool Node::hasNext() {
	return (this->next!= nullptr);
}

List::List() {
	size = 0;
}

List::~List() {
	while(this->head!= nullptr){
		delete(this->head);
		this->head = this->head->getNext();
	}
	delete(this->head);
}

void List::deleteCard(Node *node) {
	if(node== nullptr)
		return;
	if(node->getBack()!= nullptr) {
		node->getBack()->setNext(node->getNext());
	}else{
		this->head=node->getNext();
	}
	if(node->getNext()!= nullptr){
		node->getNext()->setBack(node->getBack());
	}
	this->size--;
	delete(node);
}

void List::addCard(Node &node) {
	if(this->head== nullptr){
		this->head=&node;
		return;
	}

	Node *pointer = this->head;
	while (pointer!= nullptr) {
		if (pointer->getData()!= nullptr and node.getData()!= nullptr)
			if(pointer->getData()->greaterThenWithShape(node.getData())>0) {
				node.setBack(pointer->getBack());
				if (pointer->getBack() != nullptr)
					pointer->getBack()->setNext(&node);
				else {
					this->head = &node;
				}
				node.setNext(pointer);
				pointer->setBack(&node);
				return;
			} else if (pointer->getNext() == nullptr) {
				node.setBack(pointer);
				pointer->setNext(&node);
				return;
			}
		pointer = pointer->getNext();
	}
}

void List::addCard(Card &card) {
	Node *temp = new Node(card, nullptr, nullptr);
	this->addCard(*temp);
	this->size++;
}

void List::addCard(std::vector<Card&> &cards){
	Card *card;
	while(!cards.empty()){
		card = &cards.back();
		cards.pop_back();
		this->addCard(*card);
	}
}

vector<Card*>* List::deleteCard(Card &card) {
	std::vector<Card*> *list= new vector<Card*>();
	Node* pointer = this->head;
	while(pointer!= nullptr){
		if (pointer->getData()->equals(&card)) {
			list->push_back(pointer->getData());
			this->deleteCard(pointer);
		}
		pointer = pointer->getNext();
	}
	return list;
}

int List::getSize() {
	return this->size;
}

string List::toString() {
	string ans ="";
	Node *pointer = this->head;
	while (pointer!= nullptr){
		ans += pointer->getData()->toString()+ " ";
		pointer = pointer->getNext();
	}
	return ans;
}

Node* List::getHead() {
	return this->head;
}
