#include "student.hpp"

int main() {
    Person person(123456789L);
    std::cout << "Information about person: " << std::endl;
    person.print();
    std::cout << std::endl;

    Student student(987654321L, 3.9);
    std::cout << "Information about student: "  << std::endl;
    student.print();
    std::cout << std::endl;
    return 0;
}