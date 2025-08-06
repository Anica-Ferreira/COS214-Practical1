#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
    public:
        Shape();
        ~Shape();

        virtual Shape* clone() = 0;

        int getLength();
        int getWidth();
        std::string getColour();
        int getPosition_X();
        int getPosition_Y();

        int setLength(int length_);
        int setWidth(int width_);
        std::string setColour(std::string colour_);
        int setPosition_X(int position_x_);
        int setPosition_Y(int position_y_);
        
    private:
        int length;
        int width;
        std::string colour;
        int position_x;
        int position_y;

};


#endif