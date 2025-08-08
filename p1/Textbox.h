#ifndef TEXTBOX_H
#define TEXTBOX_H

#include "Shape.h"
#include <string>

class Textbox : public Shape {
    public:
        Textbox();
        Textbox(const Textbox& other);
        virtual ~Textbox() {}

        void setText(const std::string& _text);
        std::string getText() const;

        Shape* clone() override;
        
    private:
        // int length;
        // int width;
        // std::string colour;
        // int position_x;
        // int position_y;
        std::string text;

};


#endif