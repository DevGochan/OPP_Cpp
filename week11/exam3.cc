#include <iostream>
#include <fstream>
#include <cassert>

int main() {
    std::ifstream ifstr;
    ifstr.open("file_ex1.txt", std::ios::in); // 사용자가 필요에 따라 매개변수로 모드를 지정해줄 수 있다. 안해주면 기본값으로 나옴.
    if (!ifstr.is_open()) {
        std::cerr << "file_ex1.txt cannot be opened";
        assert(false);
    }
    
    for (char ch; ifstr.get(ch); std::cout.put(ch)) {}
    ifstr.close();

    return 0;
}