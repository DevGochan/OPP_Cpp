#include "array.hpp"
#include <iostream>
#include <cassert>

Array::Array(int s) : size_(s) { ptr_ = new double[size_];}

Array::~Array() { delete[] ptr_; }

double& Array::operator[] (int index) const {
    if(index < 0 || index >= size_) {
        std::cerr << "Index is out of range. Program terminates.";
        assert(false);
    }
    return ptr_[index];
}

double& Array::operator[](int index) {
    if(index < 0 || index >= size_) {
        std::cerr << "Index is out of range. Program terminates.";
        assert(false);
    }
    return ptr_[index];
}