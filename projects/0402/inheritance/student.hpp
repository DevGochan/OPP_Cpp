#pragma once

#include "person.hpp"

class Student: public Person {
    double gpa_;

    public :
        Student();
        Student(int64_t id, double gpa);
        ~Student() = default;
        Student(const Student& student);
        void print() const;
};