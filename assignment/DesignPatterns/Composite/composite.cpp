#include "composite.h"

Point::Point(double x, double y) {
    point.first = x;
    point.second = y;
}

void Point::show() {
    cout << "(" << point.first << ", " << point.second << ")" << endl;
}

Multipoint::Multipoint() { size = 0; }

void Multipoint::addPoint(Figure* point) {
    points.push_back(point);
    size++;
}

void Multipoint::show() {
    for (int i = 0; i < size; i ++) {
        points[i] -> show();
    }
}