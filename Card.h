#ifndef CARD_H_
#define CARD_H_

#include <iostream>
using namespace std;

class NumericCard;
class FigureCard;

enum Shape {
    Club,
    Diamond,
    Heart,
    Spade
};

enum Figure {
    Jack,
    Queen,
    King,
    Ace
};

class Card {
private:
    Shape shape;
public:
    Card(Shape shape);
    virtual string toString() = 0; //Returns the string representation of the card "<value><shape>" exp: "12S" or "QD"
    virtual ~Card();
	Card(const Card&);
	Card& operator=(const Card&);
	Shape getShape()const;

	virtual int greaterThen(const Card *card)const =0;
	virtual int greaterThen(const FigureCard *card)const =0;
	virtual int greaterThen(const NumericCard *card)const =0;
	virtual bool equals(const Card* card)const =0;
	virtual bool equals(const FigureCard* card)const =0;
	virtual bool equals(const NumericCard* card)const =0;
	virtual int greaterThenWithShape(const Card *card)const =0;

	int comperShape(const Card &card)const;
};

class FigureCard : public Card {
private:
    Figure figure;
public:
    FigureCard(Figure figure, Shape shape);
	~FigureCard();
	FigureCard(const FigureCard& copyCard);
	FigureCard& operator=(const FigureCard&);
	Figure getFigure()const;
    virtual string toString() override;

	virtual int greaterThen(const FigureCard* card)const override;
	virtual bool equals(const FigureCard* card)const override;
	virtual int greaterThen(const NumericCard* card)const override;
	virtual bool equals(const NumericCard* card)const override;
	virtual int greaterThen(const Card *card)const override ;
	virtual bool equals(const Card* card)const override;
	virtual int greaterThenWithShape(const Card *card)const override;
};

class NumericCard : public Card {
private:
    int number;
public:
    NumericCard(int number, Shape shape);
	~NumericCard();
	NumericCard(const NumericCard&);
	NumericCard& operator=(const NumericCard&);
	int getNumber()const;
    virtual string toString() override;

	virtual int greaterThen(const NumericCard* card)const override;
	virtual bool equals(const NumericCard* card)const override;
	virtual int greaterThen(const FigureCard* card)const override;
	virtual bool equals(const FigureCard* card)const override;
	virtual int greaterThen(const Card *card)const override;
	virtual bool equals(const Card* card)const override;
	virtual int greaterThenWithShape(const Card *card)const override;
};

#endif
