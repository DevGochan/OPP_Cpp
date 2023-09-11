#include <iostream>

int n = 5;

int main() {
    int n = 25;
    std::cout << "the value of global n: " << ::n << std::endl;
    std::cout << "the value of local n: " << n << std::endl;
    return 0;
}