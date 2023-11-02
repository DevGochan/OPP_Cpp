#pragma once
#include <iostream>
using namespace std;

class State;

class Light {
    private :
        State* state;
    public :
        void setState(State* state);
        void deleteState();
        void turnSwitch();
};

class State {
    public :
        virtual void handle(Light* light) = 0;
};

class OffState : public State {
    public :
        void handle(Light* light);
};

class OnState : public State {
    public :
        void handle(Light* light);
};