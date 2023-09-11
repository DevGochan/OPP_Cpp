#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    bool is_eligible = age >= 25 && age <= 100; 
    std::cout << "You are "
                << (is_eligible ? "" : "not ")
                << "eligible to rent a car";
    return 0;
}
