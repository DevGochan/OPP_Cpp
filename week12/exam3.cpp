// 2차시 수업내용 

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str("Hello World!");
    std::reverse(str.begin(), str.end());
    std::cout << str << std::endl;
    return 0;
}