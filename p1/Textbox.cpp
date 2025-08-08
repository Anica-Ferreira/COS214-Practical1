#include <iostream>
#include "Textbox.h"

Textbox :: Textbox() : Shape(), text("") {}

Textbox :: Textbox(const Textbox &other) : Shape(other), text(other.text) {}

void Textbox :: setText(const std::string& _text) {
    text = _text;
}

std::string Textbox :: getText() const {
    return text;
}

Shape* Textbox :: clone() {
    return new Textbox(*this);
}