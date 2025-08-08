#include <iostream>
#include <string>
#include "Shape.h" 

using namespace std;

Shape :: Shape() : length(0), width(0), colour(""), position_x(0), position_y(0) {}

Shape :: Shape(int _length, int _width, const std::string& _colour, int pos_x, int pos_y) 
                : length(_length), width(_width), colour(_colour), position_x(pos_x), position_y(pos_y) {}

Shape :: Shape(const Shape& otherShape) {
    length = otherShape.length;
    width = otherShape.width;
    colour = otherShape.colour;
    position_x = otherShape.position_x;
    position_y = otherShape.position_y;
}