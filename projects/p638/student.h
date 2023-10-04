#pragma once
#include "person.h"

class Student : public Person {
    private:
        string name;
        double gpa;
    public:
        Student(string name, double gpa);
        ~Student();
        void print() const;
};