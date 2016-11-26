#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>

//#include <Hand.h>
#include "Hand.h"
#include "vector"
using namespace std;

class Player : public Hand {
private:
	const string name;
public:
	Player(const string &name);

	string getName();   //Returns the name of the player
	void removeCardsFromHand(vector<Card*> cards);
	void addCardsToHand(vector<Card*> cards);


};

class PlayerType1 : public Player {
public:
	PlayerType1(const string &name);

private:
	//For strategy 1
};

class PlayerType2 : public Player {  //For strategy 2
public:
	PlayerType2(const string &name);

private:
	//For strategy 1
};

class PlayerType3 : public Player {  //For strategy 3
public:
	PlayerType3(const string &name);

private:
	//For strategy 1
};

class PlayerType4 : public Player {  //For strategy 4
public:
	PlayerType4(const string &name);

private:
	//For strategy 1
};

#endif
