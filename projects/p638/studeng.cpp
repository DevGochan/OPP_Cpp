#include "student.h"

Student::Student(string nm, double gp)
:Person(nm), gpa(gp){}

Student::~Student(){}

void Student::print() const {
    Person::print();
    cout << "GPA: " << gpa << endl;
}