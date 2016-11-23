
#include "Card.h"

class Node;

class List {
private:
	Node *head;
	int size;
public:
	List();
	~List();
	void addCard(Node& node);
	void addCard(Card& card);
	void deleteCard(Node& node);
	void deleteCard(Card& card);
	int getSize();
	string toString();
};

class Node {
private:
	Card *data;
	Node *next;
	Node *back;
public:
	Node(Card& card,Node* next, Node* back);
	~Node();
	Card* getData();
	void setData(Card *data);
	Node *getBack();
	void setBack(Node* back);
	Node *getNext();
	void setNext(Node* next);
};