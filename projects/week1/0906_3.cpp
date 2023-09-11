#include <iostream>

int main() {
    int n;
    std::cout << "Enter number to find its factorial (n < 10): ";
    std::cin >> n;

    if (n >= 10) {
        std::cerr << "The number is not less than 10" << std::endl;
        return -1;
    }

    int fact = 1;
    for (int i = 2; i <= n; ++i)
        fact *= i;
    std::cout << "The number's factorial is " << fact << std::endl;
    return 0;
}