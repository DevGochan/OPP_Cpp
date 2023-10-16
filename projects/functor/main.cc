#include <iostream>

#include "smallest.hpp"

int main() {
    Smallest smallest;
    std::cout << "Smallest so far: " << smallest(100) << std::endl;
    std::cout << "Smallest so far: " << smallest(80) << std::endl;
    std::cout << "Smallest so far: " << smallest(30) << std::endl;
    return 0;
}