
#include "List.h"

Node::Node(Card &card, Node *next1, Node *back1): data(&card),next(next1),back(back1){
}

Node::~Node() {
}

Card Node::getData() {
	return this->&data;
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

List::List() {
	size = 0;
}

List::~List() {
	while(this->head!= nullptr){
		delete(this->head->getData());
		this->head = this->head->getNext();
	}
	delete(this->head);
}

void List::deleteCard(Node &node) {
	node.getBack()->setNext(node.getNext());
	delete(node.getData());
	this->size--;
}

void List::addCard(Node &node) {
	if(this->head == nullptr)
		this->head=&node;
	else {
		if (this->head->getData().greaterThen(node.getData())) {
			node.setNext(this->head);
			this->head = &node;
		} else {
			Node *pointer = this->head;
			while (pointer != nullptr and !pointer->getNext()->getData().greaterThen(node.getData()))
				pointer = pointer->getNext();
			node.setBack(pointer);
			node.setNext(pointer->getNext());
			if (pointer->getNext() != nullptr)
				pointer->getNext()->setBack(&node);
			pointer->setNext(&node);
		}
	}
	this->size++;
}

void List::addCard(Card &card) {
	Node *temp = new Node(card, nullptr, nullptr);
	this->addCard(*temp);
}
