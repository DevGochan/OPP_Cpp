#pragma once
#include <string>
#include <iostream>
using namespace std;

class Vehicle {  // Vehicle 추상
    public :
        virtual Vehicle* clone() const = 0;
        virtual ~Vehicle(){}
};

class Car : public Vehicle { // Car 구체 클래스
    private:
        string model;
        string color;
    public :
        Car(string model, string color);
        Car(const Car& car);
        Car* clone() const;
};

class Truck : public Vehicle {  // Truck 구체 클래스
    private:
        string size;
        string color;
    public :
        Truck(string size, string color);
        Truck(const Truck& truck);
        Truck* clone() const;
};