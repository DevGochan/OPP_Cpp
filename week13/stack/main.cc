#include <iostream>
#include <string>

#include "stack.hpp"  // [NOLINT]

int main() {
  Stack<std::string> stack;
  stack.push("Henry");
  stack.push("William");
  stack.push("Tara");
  stack.push("Richard");
  std::cout << "Stack size: " << stack.size() << std::endl;
  while (stack.size() > 0) {
    std::cout << "Node value at the top: " << stack.top() << std::endl;
    stack.pop();
  }
  std::cout<< "Stack size: "<< stack.size();
  return 0;
}
