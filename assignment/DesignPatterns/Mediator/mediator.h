#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {
    public :
        virtual void getMessage(string message) = 0;
};

class Employee1 : public Employee {
    public :
        void getMessage(string message);
};

class Employee2 : public Employee {
    public :
        void getMessage(string message);
};

class Employee3 : public Employee {
    public :
        void getMessage(string message);
};

class Employee4 : public Employee {
    public :
        void getMessage(string message);
};

class Mediator {
    private :
        vector<Employee*> employees;
    public :
        Mediator();
        ~Mediator();
        void sendMessage(string message);
};