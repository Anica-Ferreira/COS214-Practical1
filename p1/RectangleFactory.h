#ifndef RECTANGLEFACTORY_H
#define RECTANGLEFACTORY_H

#include "Shape.h"
#include "ShapeFactory.h"

class RectangleFactory : public ShapeFactory { 
    public:
        Shape* createShape();
        void toString();
};


#endif