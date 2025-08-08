#ifndef SQUARE_H
#define SQUARE_H

#include <string>
#include "Shape.h"


class Square : public Shape {
    // private:
    //     int length;
    //     int width;
    //     std::string colour;
    //     int position_x;
    //     int position_y;

    public:
        Square();
        Square(int, std::string, int, int);
        Square(const Square& other);
        virtual ~Square() {}

        Shape* clone() override;
};


#endif