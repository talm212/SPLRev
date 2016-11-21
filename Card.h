#ifndef CARD_H_
#define CARD_H_

#include <iostream>
using namespace std;

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
};

class FigureCard : public Card {
private:
    Figure figure;
public:
    FigureCard(Figure figure, Shape shape);
    virtual string toString() override;
};

class NumericCard : public Card {
private:
    int number;
public:
    NumericCard(int number, Shape shape);
    virtual string toString() override;
};

#endif
