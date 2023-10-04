#include <iostream>

#include "mystring.hpp"  // [NOLINT]

int main() {
  MyString str1("Hello C++ strings!");
  str1.println();

  // The following statement is equivalent to the next statement.
  // (automatically converted by the compiler)
  MyString str2 = str1;  // '=' symbol is invoking the copy constructor of the
                         // MyString and the compiler will treat this sentence
                         // as MyString str2(str1);
  str2.println();
  MyString str3 = "implicit conversion example";
  str3.println();
  MyString str4(10);  // MyString str4 = 10; is forbidden
  str4.insert(0, "Hello, World!").insert(0, "C++! ");
  str4.println();
  std::cout << str4.length() << ' ' << str4.capacity();
  return 0;
}


