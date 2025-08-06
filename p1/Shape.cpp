#include <iostream>
#include "Shape.h" 

using namespace std;

int Shape :: getLength() {
    return this->length;
}

int Shape :: getWidth() {
    return this->width;
}

std::string Shape :: getColour() {
    return this->colour;
}

int Shape :: getPosition_X() {
    return this->position_x;
}

int Shape :: getPosition_Y() {
    return this->position_y;
}

int Shape :: setLength(int length_) {
    this->length = length_;
}

int Shape :: setWidth(int width_) {
    this->width = width_;
}

std::string Shape :: setColour(std::string colour_) {
    this->colour = colour_;
}

int Shape :: setPosition_X(int position_x_) {
    this->position_x = position_x_;
}

int Shape :: setPosition_Y(int position_y_) {
    this->position_y = position_y_;
}