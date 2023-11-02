#pragma once
#include <string>
#include <iostream>
using namespace std;

class Receiver {
    public: 
        void action();
};

class Command {
    public :
        virtual void execute() = 0;
};

class ConcreteCommand : public Command {
    private :
        Receiver* receiver;
    public :
        ConcreteCommand(Receiver* receiver);
        void execute();
};

class Invoker {
    private:
        Command* command;
    public :
        void storeCommand(Command* command);
};