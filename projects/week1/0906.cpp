#include <iostream>

int main() {
  int i_value;
  double d_value;
  char c_value;

  std::cout << "Enter an integer: ";
  std::cin >> i_value;
  std::cout << "Enter a double: ";
  std::cin >> d_value;
  std::cout << "Enter a character: ";
  std::cin >> c_value;


  std::cout <<"The integer you entered is: " << i_value << std::endl;
  std::cout <<"The double you entered is: " << d_value << std::endl;
  std::cout <<"The character you entered is: " << c_value << std::endl;

  return 0;

}