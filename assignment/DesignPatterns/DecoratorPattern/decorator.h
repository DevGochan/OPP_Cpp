#pragma once
#include <string>
#include <iostream>
using namespace std;

class Component {
    private :
        string text;
    public :
        Component(string text);
        void draw();
};

class Decorator {
    private :
        Component component;
    public :
        Decorator(Component component);
        void draw();
};