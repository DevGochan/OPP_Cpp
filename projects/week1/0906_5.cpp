#include <iostream>

int main() {
    bool x = 123, y = -98;
    bool z = 0, t = -0;
    bool u = true, v = false;

    std::cout << "Value of : x" << x << std::endl; // 123 is interpreted as 1 (true)
    std::cout << "Value of : y" << y << std::endl; // 1
    std::cout << "Value of : z" << z << std::endl; // 0
    std::cout << "Value of : t" << t << std::endl; // 0
    std::cout << "Value of : u" << u << std::endl; // 1
    std::cout << "Value of : v" << v << std::endl; // 0

    return 0;
    
} 