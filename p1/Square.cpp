#include <iostream>
#include <string>
#include "Square.h"

Square :: Square() : Shape() {  // ensures square has equal length and width
    length = width = 0;
}

Square :: Square(int side, std::string _colour, int pos_x, int pos_y) : Shape(side, side, _colour, pos_x, pos_y) {} 

Square :: Square(const Square &other) : Shape(other) {}

Shape* Square :: clone() {
    return new Square(*this);
}