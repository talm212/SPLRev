#include <iostream>
#include "Card.h"
#include "Deck.h"
#include "Hand.h"

//#include <Game.h>

using namespace std;

int main(int argc, char **argv) {
	char* configurationFile = argv[1];

	/*Game game = Game(configurationFile);
	game.init();
 	Game initializedGame = game;
 	game.play();  

	cout << std::endl;
 	game.printWinner();
	game.printNumberOfTurns();
	cout << "----------" << endl;
	cout<<"Initial State:"<<endl;
  	initializedGame.printState();
	cout<<"----------"<<endl;
	cout<<"Final State:"<<endl;
	game.printState();
	return 0;*/


    //deck->m_deck.push_back(*card2);
    //deck->m_deck.push_back(*card1);
    //deck->m_deck.push_back(*card2);
    //deck->m_deck.push_back(*card3);

   // cout << deck->toString();

	NumericCard *card1d = new NumericCard(1,Diamond);

	FigureCard *cardas = new FigureCard(Ace,Spade);

	Hand hand = Hand();

	hand.addCard(*card1d);

	hand.addCard(*cardas);

	hand.addCard(*card1d);

	cout << hand.toString() <<endl;
	hand.removeCard(*card1d);

	hand.addCard(*card1d);
	cout<<hand.toString()<<endl;

	hand.removeCard(*cardas);

	hand.addCard(*card1d);
	cout<<hand.toString()<<endl;

}

