#include <iostream>
#include "PDFExporter.h"

PDFExporter::PDFExporter(Canvas* c) : ExportCanvas(c) {}

void PDFExporter :: prepareCanvas() {
    cout << "Preparing your canvas for PDF export..." << endl;
}

void PDFExporter :: renderElements() {
    cout << "Rendering your PDF..." << endl;
}

void PDFExporter :: saveToFile() {
    cout << "Saving your PDF!" << endl;
}