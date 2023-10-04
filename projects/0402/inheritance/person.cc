#include "person.hpp"

#include <iostream>
#include <cassert>

Person::Person() : id_(0) {}

Person::Person(int64_t id) : id_(id) { assert(id_ >= 1e8 && 1e9); }

void Person::print() const { std::cout << "Identity: " << id_ << std::endl; }