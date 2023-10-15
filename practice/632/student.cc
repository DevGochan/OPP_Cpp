#include "student.hpp"
#include <iostream>
#include <cassert>
#include <iomanip>

Student::Student() : Person(), gpa_(0.0) {}

Student::Student(int64_t id, double gpa) : Person(id), gpa_(gpa) {
    assert(gpa_ >= 0.0 && gpa_ <= 4.0);
}

Student::Student(const Student& student) :
    Person(student), gpa_(student.gpa_) {}

void Student::print() const {
    Person::print();
    std::cout << "GPA: " << std::fixed << std::setprecision(2)
              << gpa_ << std::endl;
}