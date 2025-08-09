#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

using namespace std;

#include "Shape.h"

class ShapeFactory {
    public:
        virtual ~ShapeFactory() {};
        Shape* create(int length, int width, const string& colour, int position_x, int position_y); //wrapper function to create shapes

    protected:
        virtual Shape* createShape(int length, int width, const string& colour, int position_x, int position_y) = 0;
        virtual void toString() = 0; 
};


#endif