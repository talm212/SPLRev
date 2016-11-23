
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
	if(this->head== nullptr){
		this->head=&node;
		return;
	}

	Node *pointer = this->head;
	while (pointer!= nullptr){
		if (pointer->getData()->greaterThen(node.getData())){
			node.setBack(pointer->getBack());
			if(pointer->getBack()!= nullptr)
				pointer->getBack()->setNext(&node);
			else{
				this->head=&node;
			}
			node.setNext(pointer);
			pointer->setBack(&node);
			return;
		}else if(pointer->getNext()== nullptr){
			node.setBack(pointer);
			pointer->setNext(&node);
			return;
		}
		pointer=pointer->getNext();
	}
	this->size++;
}

void List::addCard(Card &card) {
	Node *temp = new Node(card, nullptr, nullptr);
	this->addCard(*temp);
}

void List::deleteCard(Card &card) {
	Node* pointer = this->head;
	while(pointer!= nullptr){
		if (pointer->getData()->equals(&card)) {
			this->deleteCard(*pointer);
			break;
		}
		pointer = pointer->getNext();
	}
}

int List::getSize() {
	return this->size;
}

string List::toString() {
	string ans ="";
	Node *pointer = this->head;
	while (pointer!= nullptr){
		ans += pointer->getData()->toString();
		pointer = pointer->getNext();
	}
	return ans;
}
