#include <iostream>

int two(int m);

int main() {
  int m = 2;
  two(m);
  std::cout << m;

  return 0;
}


int two(int n) {
  return n * n;
}