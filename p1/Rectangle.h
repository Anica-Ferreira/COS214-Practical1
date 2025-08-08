#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <string>

class Rectangle : public Shape {
    // private:
    //     int length;
    //     int width;
    //     std::string colour;
    //     int position_x;
    //     int position_y;

    public:
        Rectangle();    
        Rectangle(const Rectangle& other);
        virtual ~Rectangle() {}

        Shape* clone() override;
};


#endif