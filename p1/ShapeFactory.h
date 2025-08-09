#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

using namespace std;

#include "Shape.h"


class ShapeFactory {
    public:
        virtual ~ShapeFactory() {};
        friend class Canvas; //to allow access to createShape

    protected:
        virtual Shape* createShape() = 0;
        virtual void toString() = 0; 
    
};


#endif