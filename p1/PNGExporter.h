#ifndef PNGEXPORTER_H
#define PNGEXPORTER_H

#include "ExportCanvas.h"

using namespace std;

class PNGExporter : public ExportCanvas {
    public:
        // PNGExporter();
        // ~PNGExporter();
        
    private:
        void saveToFile();
        void prepareCanvas();
        void renderElements();
};

#endif