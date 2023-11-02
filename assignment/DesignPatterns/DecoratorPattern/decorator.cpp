#include "decorator.h"

Component::Component(string tx) : text(tx) {}

void Component::draw() { cout << text << endl; }

Decorator::Decorator(Component comp)
: component(comp) {}

void Decorator::draw() {
    cout << "************" << endl;
    component.draw();
    cout << "************" << endl;
}