#include "smallest.hpp"

#include <limits>

Smallest::Smallest()
    : value_(std::numeric_limits<int>::max()) {}

int Smallest::operator()(int next) {
    if (next < value_ ) {
        value_ = next;
    }
    return value_;
}