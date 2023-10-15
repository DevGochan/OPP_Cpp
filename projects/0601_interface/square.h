#pragma once

#include "shape.h"

class Square : public Shape {
    private :
        double side;
        bool isValid() const;
    public :
        Square(double side);
        ~Square();
        void print() const;
        double getArea() const;
        double getPerimeter() const;
};