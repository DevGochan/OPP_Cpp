#include "person.hpp"

#include <iostream>
#include <cassert>

Person::Person(int64_t id, Date bd) : id_(id), birth_date_(bd) {
    assert(id_ >= 1e8 && id_ < 1e9);
}

void Person::print() const {
    std::cout << "Person Identity: " << id_ << std::endl;
    std::cout << "Person date of birth: ";
    birth_date_.print();
    std::cout << std::endl;
}