#include <iostream>
#include <cmath>

int main() {
    const double PI = 3.141592653589793238462;
    double degree = PI / 3;
    std::cout << "sin (60): " <<std::sin(degree) << std::endl;
    std::cout << "cos (60): " << std:: cos(degree) << std::endl;
    std::cout << "tan (60): " << std::tan(degree);
    return 0;
}