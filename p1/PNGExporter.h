#ifndef PNGEXPORTER_H
#define PNGEXPORTER_H

#include "ExportCanvas.h"

using namespace std;

class PNGExporter : public ExportCanvas {
    public:
        PNGExporter(Canvas* canvas);
        
    private:
        void saveToFile() override;
        void prepareCanvas() override;
        void renderElements() override;
};

#endif