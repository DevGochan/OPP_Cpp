#include <iostream>
#include <fstream>
#include <cassert>

int main() {
    std::ofstream ofstr;
    ofstr.open("file_ex1.txt");
    if (!ofstr.is_open()) { // file이 제대로 열렸는지 확인
        std::cerr << "file_ex1.txt cannot be opened"; // 대표적으로 file을 못 만드는 경우 오류 발생(용량 부족으로 인해서)
        assert(false);
    }
    for (int i = 1; i <= 10; ++i) 
        ofstr << i * 10 << " ";
    ofstr.close();

    return 0;
}