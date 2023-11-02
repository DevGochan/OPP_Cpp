#pragma once
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

class Figure {
    public : virtual void show() = 0;
};

class Point : public Figure {
    private :
        pair<double, double> point;
    public :
        Point(double x, double y);
        void show();
};

class Multipoint : public Figure {
    private :
        int size;
        vector<Figure*> points;
    public :
        Multipoint();
        void addPoint(Figure* point);
        void show();
};
