#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include "Shape.h"

class ShapeFactory {
    public:
        ShapeFactory();
        ~ShapeFactory();
        
    protected:
        virtual Shape* createShape() = 0;
        virtual void toString() = 0; 
    
};


#endif