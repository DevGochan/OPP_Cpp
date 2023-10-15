#include "name.hpp"

#include <iostream>
#include <cassert>

Name::Name(const std::string& fst,
                std::string& i,
                std::string& lst) : first_(fst), init_(i), last_(lst) {
                    assert(init_.size() == 1);
                    std::toupper(first_[0]);
                    std::toupper(init_[0]);
                    std::toupper(last_[0]);
                }



void Name::print() const {
    std::cout << "Emplyee name: " << first_ << " " << init_ << ". ";
    std::cout << last_ << std::endl;
}