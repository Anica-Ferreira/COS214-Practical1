#include <iostream>

#include "Canvas.h"
#include "ShapeFactory.h"
#include "RectangleFactory.h"
#include "SquareFactory.h"
#include "TextboxFactory.h"
#include "ShapeStore.h"

#include "ExportCanvas.h"
#include "PDFExporter.h"
#include "PNGExporter.h"


using namespace std;

int main() {
    Canvas canvas;
    
    ExportCanvas* png  = new PNGExporter(&canvas);
    ExportCanvas* pdf  = new PDFExporter(&canvas);

    pdf->exportToFile();
    png->exportToFile();
    
    // Clean up
    delete png;
    delete pdf;

    return 0;
}