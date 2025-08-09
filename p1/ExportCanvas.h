#ifndef EXPORTCANVAS_H
#define EXPORTCANVAS_H

#include "Canvas.h"

class ExportCanvas {
    public:
        ExportCanvas(Canvas* c);
        virtual ~ExportCanvas();

        void exportToFile(); //template method
        
    private:
        Canvas* canvas;

        virtual void prepareCanvas();
        virtual void renderElements();
        virtual void saveToFile() = 0;
};

#endif