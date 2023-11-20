#include <iostream>
#include <fstream>
#include <cassert>

int main() {
    std::ofstream ofstr("file_ex2.txt", std::ios::out | std::ios::app);
    if (!ofstr.is_open()){
        std::cerr << "file_ex2.txt cannot be opened";
        assert(false);
    }
    ofstr << "\nHello"; 
    ofstr.close();
    return 0;
}