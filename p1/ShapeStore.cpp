#include "ShapeStore.h"

ShapeStore::ShapeStore(){}

ShapeStore::~ShapeStore(){
    for (int i = 0; i < mementos.size(); i++){
        delete mementos[i];
    }
    mementos.clear();
}

void ShapeStore::setMemento(Memento* memento){
    mementos.push_back(memento);
}

Memento* ShapeStore :: getMemento(){
    //check if memento is empty
    if(mementos.empty()){
        return NULL;
    }
    return mementos.back();
}

void ShapeStore :: removeLast(){
    if(!mementos.empty()){
        delete mementos.back();
        mementos.pop_back();
    }
}