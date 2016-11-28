
#include "vector"
#include "Card.h"


class Node;

class List {
private:
	Node *head;
	int size;
public:
	List();
	~List();
	Node* getHead();
	void addCard(Node& node);
	void addCard(Card& card);
	void deleteCard(Node* node);
	bool deleteCard(Card& card);
	int getSize();
	string toString();

	void addCard(vector<Card *> &cards);
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
	bool hasNext();
};
