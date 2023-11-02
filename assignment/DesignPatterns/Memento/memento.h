#pragma once
#include <iostream>
#include <string>
using namespace std;

class Memento;

class Originator {
    private :
        string state;
        Memento* memento;
    public :
        Originator();
        ~Originator();
        string getState() const;
        void setState(string state);
        void restoreState();
};

class Memento {
    private :
        string state;
    public :
        string getState() const;
        void setState(string state);
};