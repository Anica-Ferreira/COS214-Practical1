#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
    public:
        Shape();
        Shape(int, int, const std::string&, int, int);
        Shape(const Shape& other);

        virtual ~Shape() {};
        virtual Shape* clone() = 0;
        
    protected:      // changed from private to protected
        int length;
        int width;
        std::string colour;
        int position_x;
        int position_y;
};

#endif