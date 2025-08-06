#ifndef MEMENTO_H
#define MEMENTO_H

#include "Shape.h"

class Memento {
    public:
        Memento(Shape* elements);
        // ~Memento();
        
    private:
        Shape* shapes;

        Shape* getShapeState();
        void setShapeState();

};


#endif