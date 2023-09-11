#include <iostream>
#include <iomanip> // Required header to use manipulators

int main() {
    int i = 42;
    float f = 3.14159265f;

    // Using std::setw() and std:: setfill()
    std::cout << std::setw(10) << std::setfill('*') << i << std::endl;
    std::cout << i << std::endl;  // Output without the effect of setw and setfill


    // Using std::setprecision(
        std::cout << std::fixed << std::setprecision(4) << f << std::endl;
        std::cout << f << std::endl;   // Output without the effect of setprecision
                                        // (in this case, std::fixed persistently changes the stream state)

    return 0;
}