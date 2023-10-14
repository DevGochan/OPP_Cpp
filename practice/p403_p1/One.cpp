#include "One.h"
#include <iostream>

int One::getX() const{
    std::cout<< x;
}  

int One::getY() const{
    std::cout<< y;
}

One::~One() {}

One::One(int x, int y) : x(x), y(y) {  
}