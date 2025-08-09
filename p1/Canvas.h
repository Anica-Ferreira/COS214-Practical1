#ifndef CANVAS_H
#define CANVAS_H

using namespace std;

#include <vector>
#include "Shape.h" 
#include "ShapeFactory.h"
#include "Memento.h"

class Canvas {
    public:
        Canvas();
        ~Canvas();
        
        Memento* captureCurrent();
        void undoAction(Memento* prev);
        void addShapeFromFactory(ShapeFactory* factory);
        const vector<Shape*>& getShapes() const;

    private:
        vector<Shape*> shapes; //unsure about this..
};

#endif