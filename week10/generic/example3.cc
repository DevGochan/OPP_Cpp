#include <iostream>
#include <cstring>

template <typename T>
T smaller(const T& op1, const T& op2) {
    return op1 < op2 ? op1 : op2;
}

template <>
const char* smaller(const char* const& op1, const char* const& op2) {
    return std::strcmp(op1, op2) < 0 ? op1 : op2;
}

int main() {
    const char* s1 = "bye";
    const char* s2 = "bye bye";
    std::cout << smaller(s1, s2) << std::endl;
    return 0;
}