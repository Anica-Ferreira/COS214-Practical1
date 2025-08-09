#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <string>

class Rectangle : public Shape {
    public:
        Rectangle();
        Rectangle(int length, int width, const std::string& colour, int position_x, int position_y);    
        Rectangle(const Rectangle& other);
        virtual ~Rectangle() {}

        Shape* clone() override;
};


#endif