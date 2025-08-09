#include <iostream>
#include "ShapeFactory.h"

Shape* ShapeFactory :: createShape(){
    cout << "Implement in derived class" << endl;
}

void ShapeFactory :: toString(){
    cout << "Implement in derived class" << endl;
}
