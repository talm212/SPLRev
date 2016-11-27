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
	virtual vector<Card*> ask(Player &player,Card &card)=0;
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
	//vector<Card*> ask(Player &player,Card &card);
};

class PlayerType2 : public Player {  //For strategy 2
public:
	PlayerType2(const string &name);

private:
	//vector<Card*> ask(Player &player,Card &card);
};

class PlayerType3 : public Player {  //For strategy 3
public:
	PlayerType3(const string &name);

private:
	//vector<Card*> ask(Player &player,Card &card);
};

class PlayerType4 : public Player {  //For strategy 4
public:
	PlayerType4(const string &name);

private:
	//vector<Card*> ask(Player &player,Card &card);
};

#endif
