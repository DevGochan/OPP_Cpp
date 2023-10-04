#include <iostream>

#include "mystring.hpp"

int main() {
    MyString str1("Hello C++");
    str1.println();
    MyString str2 = str1;
    str2.println();
    MyString str3 = "implicit conversion";
    str3.println();
    MyString str4(10);
    str4.insert(0, "Hello, world!").insert(0, "C++! ");
    str4.println();

    return 0;
}