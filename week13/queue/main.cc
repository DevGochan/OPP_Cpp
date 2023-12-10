#include <iostream>
#include <string>

#include "queue.hpp"  // [NOLINT]

int main() {
  Queue<std::string> queue;
  queue.push("Henry");
  queue.push("William");
  queue.push("Tara");
  queue.push("Richard");
  std::cout << "Checking front and back elements";
  std::cout << "after four push operations:" << std::endl;
  std::cout << "Element at the front: " << queue.front() << std::endl;
  std::cout << "Element at the back: " << queue.back() << std::endl
            << std::endl;

  queue.pop();
  queue.pop();
  std::cout << "Checking front and back elements";
  std::cout << "after two pop operations:" << std::endl;
  std::cout << "Element at the front: " << queue.front() << std::endl;
  std::cout << "Element at the back: " << queue.back() << std::endl;
  return 0;
}
