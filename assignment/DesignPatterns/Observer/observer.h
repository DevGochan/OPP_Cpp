#pragma once
#include <string>
#include <iostream>
#include <set>
using namespace std;

class Observer;

class Subject {
    private :
        set<Observer*> observers;
    public :
        void subscribe(Observer* observer);
        void unsubscribe(Observer* observer);
        void notify(int price);
};

class Observer {
    public :
        virtual void update(int price) = 0;
        virtual ~Observer() {}
};

class Observer1 : public Observer {
    private :
        Subject* subject;
    public :
        Observer1(Subject* subject);
        void update(int price);
};

class Observer2 : public Observer {
    private :
        Subject* subject;
    public:
        Observer2(Subject* subject);
        void update(int price);
};