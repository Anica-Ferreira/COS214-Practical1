#ifndef PDFEXPORTER_H
#define PDFEXPORTER_H

#include "ExportCanvas.h"

using namespace std;

class PDFExporter : public ExportCanvas {
    public:
        // PDFExporter();
        // ~PDFExporter();
        
    private:
        void saveToFile();
        void prepareCanvas();
        void renderElements();
};

#endif