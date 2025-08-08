#ifndef TEXTBOXFACTORY_H
#define TEXTBOXFACTORY_H

#include "Shape.h"

class TextboxFactory {
    public:
        Shape* createShape();
        void toString();
};


#endif