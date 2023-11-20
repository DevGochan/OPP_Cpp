#include <iostream>
#include <fstream>
#include <cassert>

int main() {
    std::fstream fstr("file_ex1.txt", std::ios::in | std::ios::out);
    if (!fstr.is_open()) {
        std::cerr << "file_ex1.txt cannot be opened";
        assert(false); 
    }
    int num, sum = 0;
    while (fstr >> num) sum += num;
    fstr.clear();
    fstr << "\n The sum of the numbers is : " << sum;
    fstr.close();

    return 0;
}