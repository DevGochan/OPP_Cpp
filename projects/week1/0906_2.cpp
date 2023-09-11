#include <iostream>

int main() {
    int num, sum = 0;
    std::cout <<"Enter the first integer (EOF to stop): ";
    while (std::cin >> num) {
        sum += num;
        std::cout << "Enter the next integer: ";
    }
    std::cout << "The sum is: " << sum;
    return 0;
}