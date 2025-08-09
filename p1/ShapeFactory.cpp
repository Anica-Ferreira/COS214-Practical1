#include <iostream>
#include "ShapeFactory.h"

Shape* ShapeFactory :: create(int length, int width, const std::string& colour, int position_x, int position_y){
    return createShape(length, width, colour, position_x, position_y);
}

Shape* ShapeFactory :: createShape(int length, int width, const std::string& colour, int position_x, int position_y){
    cout << "Implement in derived class" << endl;
}

void ShapeFactory :: toString(){
    cout << "Implement in derived class" << endl;
}