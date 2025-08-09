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
    ShapeStore history;

    ShapeFactory* rectFact = new RectangleFactory();
    
    Shape* r1 = rectFact->create(10,20,"Red",3,3);
    Shape* r2 = rectFact->create(10,20,"Red",3,3);

    canvas.addShape(r1);
    canvas.addShape(r2);
    
    ExportCanvas* png  = new PNGExporter(&canvas);
    ExportCanvas* pdf  = new PDFExporter(&canvas);

    pdf->exportToFile();
    png->exportToFile();
    
    //clean up memory
    delete png;
    delete pdf;

    return 0;
}