#ifndef RECTANGLEFACTORY_H
#define RECTANGLEFACTORY_H

#include "Shape.h"

class RectangleFactory {
    public:
        RectangleFactory();
        ~RectangleFactory();

        Shape* createShape();
        void toString();
};


#endif