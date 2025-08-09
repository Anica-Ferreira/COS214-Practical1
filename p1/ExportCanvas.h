#ifndef EXPORTCANVAS_H
#define EXPORTCANVAS_H

#include "Canvas.h"

class ExportCanvas {
    public:
        ExportCanvas();     // still need to modify
        ~ExportCanvas();

        void exportToFile(); //template method
        
    private:
        Canvas* canvas;

        virtual void prepareCanvas(); //chenged to virtual
        virtual void renderElements();
        virtual void saveToFile() = 0;
    
};


#endif