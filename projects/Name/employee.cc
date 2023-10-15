#include "employee.hpp"

#include <iostream>
#include <cassert>

Employee::Employee(const std::string& fst,
                            std::string& i,
                            std::string& lst,
                            double sal) : name_(fst, i, lst), salary_(sal) {
                                assert(salary_ > 0.0 && salary_ < 100000.0);
                            }

void Employee::print() const {
    name_.print();
    std::cout << "Salary: " << salary_ << std::endl << std::endl;
}