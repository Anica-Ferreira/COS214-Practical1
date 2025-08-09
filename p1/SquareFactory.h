#ifndef SQUAREFACTORY_H
#define SQUAREFACTORY_H

#include "Shape.h"
#include "ShapeFactory.h"

class SquareFactory : public ShapeFactory {
    public:
        Shape* createShape();
        void toString();
};


#endif