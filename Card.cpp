#include "Card.h"

string Card::toString() {

    string s="";
    switch (shape){
        case Club:
            s = "C";
        case Diamond:
            s = "D";
        case Heart:
            s = "H";
        case Spade:
            s = "S";
    }
    return s;
}

string FigureCard::toString() {

    string SNF="";
    switch (figure) {
        case Jack:
            SNF = "J" + Card::toString();
            break;
        case Queen:
            SNF = "Q" + Card::toString();
            break;
        case King:
            SNF = "K" + Card::toString();
            break;
        case Ace:
            SNF = "A" + Card::toString();
            break;
    }
    return SNF;
}

string NumericCard::toString(){
    return ""+number + Card::toString();
}

Card::Card(Shape shape1): shape(shape1){};

Card::~Card() {}

FigureCard::FigureCard(Figure figure1, Shape shape1):Card(shape1),figure(figure1){}

NumericCard::NumericCard(int number1, Shape shape1):Card(shape1),number(number1){}

