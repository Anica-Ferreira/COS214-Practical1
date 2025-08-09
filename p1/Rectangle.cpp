#include <iostream>
#include "Rectangle.h"

Rectangle :: Rectangle() : Shape() {}

Rectangle::Rectangle(int length, int width, const std::string& colour, int position_x, int position_y): Shape(length, width, colour, position_x, position_y){}

Rectangle :: Rectangle(const Rectangle &other) : Shape(other) {}

Shape* Rectangle :: clone() {
    return new Rectangle(*this);
}

