#include <iostream>
#include "Memento.h"

Memento :: Memento(vector<Shape*>& elements) {
    for (int i = 0; i < elements.size(); ++i) {
        shapes.push_back(elements[i]->clone());
    }
}

Memento :: ~Memento(){
    for (int i = 0; i < shapes.size(); i++){
        delete shapes[i];
    }
    shapes.clear();
}

vector<Shape*>& Memento :: getShapeState(){
    return shapes;
}