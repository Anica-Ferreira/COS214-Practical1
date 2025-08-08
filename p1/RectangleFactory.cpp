#include <iostream>
#include "RectangleFactory.h"
#include "Rectangle.h"

Shape* RectangleFactory :: createShape() {
    return new Rectangle();
}

void RectangleFactory :: toString() {
    std::cout << "Rectangle added to Canvas!" << std::endl;
}