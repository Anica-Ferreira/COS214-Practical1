#ifndef CANVAS_H
#define CANVAS_H

#include "Shape.h" 
#include "Memento.h"

class Canvas {
    public:
        Canvas();   // still need to modify 
        ~Canvas();
        
        Memento* captureCurrent();
        void undoAction(Memento* prev);

    private:
        Shape* shapes;
};

#endif