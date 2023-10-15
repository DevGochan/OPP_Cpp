#pragma once

#include <string>
#include "name.hpp"

class Employee {
    Name name_;
    double salary_;

    public :
        Employee(const std::string& first,
                        std::string& init,
                        std::string& last,
                        double salary_);
        ~Employee() = default;
        void print() const;
};