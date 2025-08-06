#ifndef EXPORTCANVAS_H
#define EXPORTCANVAS_H

#include "Canvas.h"

class ExportCanvas {
    public:
        ExportCanvas();     // still need to modify
        ~ExportCanvas();

        void exportToFile();
        
    private:
        Canvas* canvas;

        void prepareCanvas();
        void renderElements();
        virtual void saveToFile() = 0;
    
};


#endif