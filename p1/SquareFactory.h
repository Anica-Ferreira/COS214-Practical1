#ifndef SQUAREFACTORY_H
#define SQUAREFACTORY_H

#include "Shape.h"

class SquareFactory {
    public:
        SquareFactory();
        ~SquareFactory();

        Shape* createShape();
        void toString();
};


#endif