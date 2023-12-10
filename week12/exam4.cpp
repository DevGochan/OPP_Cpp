// 중견기업 1번문제 코테수준

#include <iostream>
#include <string>

bool palindrome(const std::string& str) {
    if (str.length() <= 1) return true;
    if (str[0] != str[str.length()-1]) return false;
    return palindrome(str.substr(1, str.length() - 2));
}

int main() {
    std::string s1("hello");
    std::string s2("ABABA");
    std::cout << std::boolalpha;
    std::cout << s1 << ": " << palindrome(s1) << std::endl;
    std::cout << s2 << ": " << palindrome(s2) << std::endl;
    return 0;
}