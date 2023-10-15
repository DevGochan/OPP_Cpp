#pragma once

#include <iostream>
#include "date.hpp"

class Person {
    int64_t id_;
    Date birth_date_;

    public :
        Person(int64_t id, Date birth_date);
        ~Person() = default;
        void print() const;
};