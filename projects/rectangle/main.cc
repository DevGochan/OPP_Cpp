// #include <iostream>

// #include "rectangle.hpp"

// int main() {
//   Rectangle rect1(3.0, 4.2), rect2(5.1, 10.2), rect3(rect2);
//   std::cout << "rect1: ";
//   rect1.print();
//   std::cout << std::endl <<"rect2: ";
//   rect2.print();
//   std::cout << std::endl << "rect3: ";
//   rect3.print();

//   return 0;
// }
// // g++ *.cc -o run 컴파일 명령어


#include <iostream>

#include "rectangle.hpp"

int main() {
  {
    Rectangle rect1(1.2, 3.4), rect2(5.6, 7.8);
    std::cout << "count of objects: " << Rectangle::get_count()
              << std::endl;
  }
   Rectangle rect1(1.2 , 3.4), rect2(5.6, 7.8);
    std::cout << "count of objects: " << Rectangle::get_count()
              << std::endl;

}