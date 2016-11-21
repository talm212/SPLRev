#include <iostream>
#include "Card.h"
#include "Deck.h"

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
    FigureCard *card1= new FigureCard(CARD_H_::Queen,CARD_H_::Spade);
    FigureCard *card2= new FigureCard(CARD_H_::Jack,CARD_H_::Spade);
    FigureCard *card3= new FigureCard(CARD_H_::King,CARD_H_::Spade);
    Deck* deck = new Deck();

    cout << card1->toString();
    //deck->m_deck.push_back(*card2);
    //deck->m_deck.push_back(*card1);
    //deck->m_deck.push_back(*card2);
    //deck->m_deck.push_back(*card3);

    cout << deck->toString();

}

