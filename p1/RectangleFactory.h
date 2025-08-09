#ifndef RECTANGLEFACTORY_H
#define RECTANGLEFACTORY_H

#include "Shape.h"
#include "ShapeFactory.h"

class RectangleFactory : public ShapeFactory { 
    public:
        Shape* createShape(int length, int width, const std::string& colour, int position_x, int position_y);
        void toString() override;
};

#endif