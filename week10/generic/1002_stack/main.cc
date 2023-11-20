#include <iostream>
#include <string>
#include "stack.hpp"

int main() {
    Stack<int> i_stack(10);
    Stack<std::string> str_stack(10);
    i_stack.push(10);
    i_stack.push(2);
    i_stack.push(11);
    i_stack.push(5);
    std::cout << i_stack.pop() << std::endl;
    std::cout << i_stack.pop() << std::endl;
    str_stack.push("asdf");
    str_stack.push("qwer");
    str_stack.push("zxcv");
    std::cout << str_stack.pop() << std::endl;

    return 0;
}