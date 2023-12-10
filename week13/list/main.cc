#include <iostream>
#include <string>
#include "list.hpp"

int main() {
    List<std::string> list;
    list.insert(0, "Micheal");
    list.insert(1, "Jane");
    list.insert(2, "Sophie");
    list.insert(3, "Thomas");
    std::cout << "print: " << std::endl;
    list.print();
    std::cout << "get: " << std::endl;
    std::cout << list.get(0) << std::endl; 
    std::cout << list.get(2) << std::endl; 
    std::cout << "erase: " << std::endl;
    list.erase(0);
    std::cout<< "size: " << list.size() << std::endl;

    return 0;
}