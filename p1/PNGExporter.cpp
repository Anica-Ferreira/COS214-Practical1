#include <iostream>
#include "PNGExporter.h"

PNGExporter::PNGExporter(Canvas* c) : ExportCanvas(c) {}

void PNGExporter :: prepareCanvas() {
    cout << "Preparing your canvas for PNG export..." << endl;
}

void PNGExporter :: renderElements() {
    cout << "Rendering your PNG..." << endl;
}

void PNGExporter :: saveToFile() {
    cout << "Saving your PNG!" << endl;
}
