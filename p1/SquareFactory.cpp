#include <iostream>
#include "SquareFactory.h"
#include "Square.h"

Shape* SquareFactory :: createShape() {
    return new Square();
}

void SquareFactory :: toString() {
    std::cout << "Square added to Canvas!" << std::endl;
}