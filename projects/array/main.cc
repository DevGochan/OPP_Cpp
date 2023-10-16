#include <iostream>
#include "array.hpp"

int main() {
    Array arr(3);
    arr[0] = 22.31;
    arr[1] = 123.31;
    arr[2] = 32.31;

    for (int i = 0; i < 3; i++) {
        std::cout << "Value of arr [" << i << "]: " << arr[i] << std::endl;

        return 0;
    }
}