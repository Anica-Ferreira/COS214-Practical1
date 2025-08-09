#include <iostream>
#include "RectangleFactory.h"
#include "Rectangle.h"

Shape* RectangleFactory :: createShape(int length, int width, const std::string& colour, int position_x, int position_y) {
    return new Rectangle(length, width, colour, position_x, position_y);
}

void RectangleFactory :: toString() {
    std::cout << "Rectangle" << std::endl;
}