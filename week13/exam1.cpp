// 과제 2-2 오사오입. 엡실론 계산기

#include <iostream>
#include <iomanip>

int main() {
    double a = 0.245;
    std::cout << a << std::endl;
    std::cout << std::setprecision(2) << a << std::endl;
    std::cout << std::setprecision(2) << a + 1e-16 << std::endl;
}