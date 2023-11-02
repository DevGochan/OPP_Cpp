#pragma once
#include <string>
#include <iostream>
using namespace std;

class Subject {
    public :
        virtual void draw(int x, int y) = 0;
        virtual void erase() = 0;
        virtual ~Subject() {}
};

class Real : public Subject {
    public : 
        void draw(int x, int y);
        void erase();
};

class Proxy : public Subject {
    private:
        Subject* real;
    public :
        Proxy();
        ~Proxy();
        void draw(int x, int y);
        void erase();
};