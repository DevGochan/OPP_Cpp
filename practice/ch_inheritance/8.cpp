#include <iostream>
#include <cassert>

using namespace std;

class Person {
    private :
        int64_t id_;

    public :
        void set_id(int64_t id);
        int64_t get_id() const;
};

void Person::set_id(int64_t id) {
    id_ = id;
    assert(id_ >= 1e8 && id_ < 1e9);
}

int64_t Person::get_id() const {return id_;}

class Student : public Person {
    double gpa_;

    public:
        void set_gpa(double gpa);
        double get_gpa() const;
};

void Student::set_gpa(double gpa) {
    gpa_ = gpa;
    assert(gpa_ >= 0 && gpa_ <= 4.0);
}

double Student::get_gpa() const {return gpa_;}

int main() {
    Person person;
    person.set_id(123456789L);
    cout << "Person's ID: " << person.get_id() << endl << endl;
    Student student;
    student.set_id(987654321L);
    student.set_gpa(3.9);
    cout << "Student's ID: " << student.get_id() << endl;
    cout << "Student's GPA: " << student.get_gpa() << endl;

    return 0;

}