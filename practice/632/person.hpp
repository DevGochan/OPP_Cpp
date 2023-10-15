#pragma once

#include <iostream>

class Person {
    int64_t id_;

    public :
        Person();
        explicit Person(int64_t id);
        Person(const Person& person) = default;
        ~Person() = default;
        void print() const;
 };