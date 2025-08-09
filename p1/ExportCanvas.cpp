#include <iostream>
#include "ExportCanvas.h"

using namespace std;

ExportCanvas :: ExportCanvas(Canvas* canvas){
    this->canvas = canvas;
}

ExportCanvas :: ~ExportCanvas(){}

void ExportCanvas :: exportToFile(){
    prepareCanvas();
    renderElements();
    saveToFile();
}

void ExportCanvas :: prepareCanvas() {
    cout << "Preparing your canvas ..." << endl;
}

void ExportCanvas :: renderElements() {
    cout << "Rendering your masterpiece ..." << endl;
}

void ExportCanvas::saveToFile() {
    cout << "File saved." << endl;
}