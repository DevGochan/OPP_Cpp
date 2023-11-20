#include <iostream>
#include <fstream>
#include <cassert>

int main() {
    std::ifstream ifstr;
    ifstr.open("file_ex1.txt");
    if (!ifstr.is_open()) {
        std::cerr << "file_ex1.txt cannot be opened";
        assert(false);
    }
    for (int i = 1; i <= 10; ++i) {
        int data;
        ifstr >> data;
        std::cout << data << " ";
    }
    ifstr.close();

    return 0;
}