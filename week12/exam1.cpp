#include <iostream>
#include <fstream>

int main() {
    int int1 = 12345;
    double double1 = 45.67;

    std::ofstream ofstr("Sample", std::ios::out | std::ios::binary);

    ofstr.write(reinterpret_cast<char*>(&int1), sizeof(int1));
    ofstr.write(reinterpret_cast<char*>(&double1), sizeof(double));

    ofstr.close();

    int int2;
    double double2;
    std::ifstream ifstr("Sample", std::ios::in | std::ios::binary);
    ifstr.read(reinterpret_cast<char*>(&int2), sizeof(int2));
    ifstr.read(reinterpret_cast<char*>(&double2), sizeof(double2));
    ifstr.close();

    std::cout << int2 << ' ' << double2 << ' ';
    return 0;
}