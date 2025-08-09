#ifndef TEXTBOXFACTORY_H
#define TEXTBOXFACTORY_H

#include "Shape.h"
#include "ShapeFactory.h"

class TextboxFactory : public ShapeFactory {
    public:
        Shape* createShape();
        void toString();
};


#endif