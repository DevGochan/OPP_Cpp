#include <iostream>

int main() {
    int number, denom, result;

    for ( int i = 0; i < 5; ++i){
        std::cout<< "Enter an integer: ";
        std::cin >> number;
        std::cout<< "Enter another integer: ";
        std::cin >> denom;
    try {
        if (!denom)
        throw 0;
    result = number / denom;
    std::cout << "The result of division is : " << result << std::endl;
    } catch (const int x) {
        std::cerr << "No division by zero.program is aborted"
 << std::endl ;   }

    }
    return 0;
}