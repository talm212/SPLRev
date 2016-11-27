#include "Card.h"

//*************************Card*************************
//constructor
Card::Card(Shape shape1): shape(shape1){};

//destructor
Card::~Card() {};

Card::Card(const Card& card): shape(card.shape) {}

Card& Card::operator=(const Card&) {return *this;}

Shape Card::getShape()const {
    return this->shape;
};


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

/*bool Card::greaterThen(const Card& card)const {
	bool ans =!card.greaterThen(*this);
	return ans;
}*/

/*bool Card::equals(const Card &card) const {
	bool ans;
	ans = card.equals(*this);
	return ans;
};*/

int Card::comperShape(const Card &card)const {
	return this->shape-card.shape;
}

//******************************************************


//**********************FigureCard**********************
//constructor
FigureCard::FigureCard(Figure figure1, Shape shape1):Card(shape1),figure(figure1){};

FigureCard::~FigureCard() {}

//copy constructor
FigureCard::FigureCard(const FigureCard& copyCard) :Card(copyCard),figure(copyCard.figure){};

FigureCard& FigureCard::operator=(const FigureCard&) {}

Figure FigureCard::getFigure()const {
    return this->figure;
};

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

int FigureCard::greaterThen(const Card *card)const{
	return card->greaterThen(this) * (-1);
}

int FigureCard::greaterThen(const FigureCard* card)const{
	return (this->figure-card->figure);
}

int FigureCard::greaterThen(const NumericCard* card)const{
	return 1;
}

bool FigureCard::equals(const FigureCard *card)const {
	return (this->getFigure()==card->getFigure() and this->getShape()==card->getShape());
}

bool FigureCard::equals(const NumericCard *card)const {
	return false;
}

bool FigureCard::equals(const Card *card) const {
	return card->equals(this);
}

int FigureCard::greaterThenWithShape(const Card *card) const {
	int ans = this->greaterThen(card);
	if(ans==0)
		return this->comperShape(*card);
	return ans;
}


//******************************************************


//*********************NumericCard**********************
//constructor
NumericCard::NumericCard(int number1, Shape shape1):Card(shape1),number(number1){};

NumericCard::~NumericCard() {}

//copy constructor
NumericCard::NumericCard(const NumericCard& copyCard):Card(copyCard),number(copyCard.number){};

NumericCard& NumericCard::operator=(const NumericCard&) {return *this;}

int NumericCard::getNumber()const {
    return this->number;
};

string NumericCard::toString(){
    return std::to_string(number) + Card::toString();
};

int NumericCard::greaterThen(const NumericCard* card)const{
	return (this->number-card->number);
}

int NumericCard::greaterThen(const FigureCard* card)const{
	return -1;
}

int NumericCard::greaterThen(const Card *card)const{
	return card->greaterThen(this)*(-1);
}

bool NumericCard::equals(const FigureCard *card)const {
	return false;
}

bool NumericCard::equals(const NumericCard *card)const {
	return (this->getNumber()==card->getNumber() and this->getShape()==card->getShape());
}

bool NumericCard::equals(const Card *card) const {
	return equals(this);
}

int NumericCard::greaterThenWithShape(const Card *card) const {
	int ans = this->greaterThen(card);
	if(ans==0)
		return this->comperShape(*card);
	return ans;
}


//******************************************************







