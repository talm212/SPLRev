#include "Card.h"

//*************************Card*************************
//constructor
Card::Card(Shape shape1): shape(shape1){};

//destructor
Card::~Card() {};

Card::Card(const Card& card): shape(card.shape) {}

Card& Card::operator=(const Card&) {return *this;}

/*Shape Card::getShape() {
    return this->shape;
};*/


string Card::toString() {

    string s="";
    switch (shape){
        case Club:
            s = "C";
            break;
        case Diamond:
            s = "D";
            break;
        case Heart:
            s = "H";
            break;
        case Spade:
            s = "S";
            break;
    }
    return s;
}

bool Card::greaterThen(const Card& card)const {
	bool ans;
	ans = card.greaterThen(*this);
	return !ans;
};

//******************************************************


//**********************FigureCard**********************
//constructor
FigureCard::FigureCard(Figure figure1, Shape shape1):Card(shape1),figure(figure1){};

FigureCard::~FigureCard() {}

//copy constructor
FigureCard::FigureCard(const FigureCard& copyCard) :Card(copyCard),figure(copyCard.figure){};

FigureCard& FigureCard::operator=(const FigureCard&) {}

/*Figure FigureCard::getFigure() {
    return this->figure;
};*/

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
};

bool FigureCard::greaterThen(const FigureCard& card){
	return (this->figure>card.figure);
}

bool FigureCard::greaterThen(const NumericCard& card){
	return true;
}

//******************************************************


//*********************NumericCard**********************
//constructor
NumericCard::NumericCard(int number1, Shape shape1):Card(shape1),number(number1){};

NumericCard::~NumericCard() {}

//copy constructor
NumericCard::NumericCard(const NumericCard& copyCard):Card(copyCard),number(copyCard.number){};

NumericCard& NumericCard::operator=(const NumericCard&) {return *this;}

/*int NumericCard::getNumber() {
    return this->number;
};*/

string NumericCard::toString(){
    return std::to_string(number) + Card::toString();
};

bool NumericCard::greaterThen(const NumericCard& card){
	return (this->number>card.number);
}

bool NumericCard::greaterThen(const FigureCard& card){
	return false;
}

//******************************************************







