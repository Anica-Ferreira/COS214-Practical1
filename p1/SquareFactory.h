#ifndef SQUAREFACTORY_H
#define SQUAREFACTORY_H

#include "Shape.h"

class SquareFactory {
    public:
        Shape* createShape();
        void toString();
};


#endif