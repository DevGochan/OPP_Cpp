#include <iostream>
#include <iomanip> 

int main() {
    bool b = true;
    int i = 255;

    std::cout << std::boolalpha << b << '\n';
    std::cout << std::noboolalpha << b << '\n';

    std::cout << std::dec << i << '\n';
    std::cout << std::oct << std::showbase << i << '\n'; // output: 0377 
    std::cout << std::hex << i << '\n';
    std::cout << std::noshowbase;
    return 0;

}

// 19슬라이드까지