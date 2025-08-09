#ifndef MEMENTO_H
#define MEMENTO_H

#include <vector>
#include "Shape.h"

using namespace std;

class Canvas;

class Memento {
    public:
        Memento(vector<Shape*>& shapes);
        ~Memento();
    private:
        vector<Shape*> shapes;
        vector<Shape*>& getShapeState();
       
        friend class Canvas;
};


#endif