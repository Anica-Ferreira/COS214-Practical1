
#include "Canvas.h"

Canvas :: Canvas(){}

Canvas :: ~Canvas(){
    for (int i = 0; i < shapes.size(); i++){
        delete shapes[i];
    }
    shapes.clear();
}

Memento* Canvas :: captureCurrent() {
    if(shapes.empty()){
        return NULL;
    }

    //deep copy all sahpes for Memento
    vector<Shape*> copyShapes;
    for (int i = 0; i < shapes.size(); i++){
        copyShapes.push_back(shapes[i]->clone());
    }

    return new Memento(copyShapes);
}

void Canvas :: undoAction(Memento* prev) {
    if(!prev){
        return;
    }

    //delete current shapes
    for (int i = 0; i < shapes.size(); i++){
        delete shapes[i];
    }
    shapes.clear();

    //restore from memento
    vector<Shape*>& prevShapes = prev->getShapeState();
    for (int i = 0; i < prevShapes.size(); i++){
        shapes.push_back(prevShapes[i]->clone());
    }
}

void Canvas :: addShapeFromFactory(ShapeFactory* factory){
    Shape* newShape = factory->createShape();
    shapes.push_back(newShape);
}