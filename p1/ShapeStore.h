#ifndef SHAPESTORE_H
#define SHAPESTORE_H

#include <vector>
#include "Memento.h"

using namespace std;

class ShapeStore
{
    public:
        ShapeStore();
        ~ShapeStore();

        void setMemento(Memento* memento);
        Memento* getMemento();
        void removeLast();
    private:
        vector<Memento*> mementos; 
};

#endif