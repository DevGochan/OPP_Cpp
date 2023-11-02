#include "fraction.hpp"

#include <iostream>

int main() {
    Fraction fract1(1); // default parameter를 같이 쓰겠다.
    Fraction fract2(1, 2);  // default parameter를 무시하고 내가 넘겨주는 값으로 다 사용하겠다.
    ++fract1; // 전위증가 구현했기때문에 객체에 직접 적용이 가능함
    std::cout << "++fract1: " << fract1 << std::endl; // 게터의 도움 없이 바롸 사용이 가능함. 코드간결 명확해짐
    fract2 += 3;
    std::cout << "fract2 += 3: " << fract2 << std::endl;
    Fraction temp;
    std:: cin >> temp;
    std::cout << static_cast<double>(temp) << std::endl;
    return 0;
}