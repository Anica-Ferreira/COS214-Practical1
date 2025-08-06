#ifndef TEXTBOX_H
#define TEXTBOX_H

#include "Shape.h"
#include <string>

class Textbox : public Shape {
    public:
        Textbox();
        ~Textbox();

        Shape* clone();
        
    private:
        // int length;
        // int width;
        // std::string colour;
        // int position_x;
        // int position_y;
        std::string text;

};


#endif