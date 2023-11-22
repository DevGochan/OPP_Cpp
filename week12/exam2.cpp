#include <iostream>
#include <string>
#include <fstream>

void serialize(const std::string& str, std::ostream& ofstr) {
    size_t len = str.length();
    ofstr.write(reinterpret_cast<char*>(&len), sizeof(len));
    ofstr.write(str.data(), len);
}

std::string deserialize(std::ifstream& ifstr) {
    size_t len;
    ifstr.read(reinterpret_cast<char*>(&len), sizeof(len));
    std::string str;
    str.resize(len);
    ifstr.read(&str[0], len);
}

int main() {
    std::string str = "Hello, World!";
    std::ofstream ofstr("str.bin", std::ios::binary);
    serialize(str,  ofstr);
    ofstr.close();
    std::ifstream ifstr("str.bin", std::ios::binary);
    std::cout << deserialize(ifstr);
    ifstr.close();
    return 0;
}