#include <iostream>
#include <cassert>

/*
    long int64_t
    long long int128_t
    unsigned long uint64_t
*/

class Person {
    int64_t id_; // c++에서는 long타입을 쓰지 않음. 사용환경에 따라서 byte수가 가변이기 때문에 사용 x 
                // 정수형을 64비트 (8바이트)에 사용
    public:
        void set_id(int64_t id);
        int64_t get_id() const;
};

void Person::set_id(int64_t id) {
    id_ = id;
    assert(id_ >= 1e8 && id_ < 1e9); // assert는 안의 표현식이 f면 프로그램 즉시 종료.
}

int64_t Person::get_id() const { return id_; }

class Student : public Person {
    double gpa_;

    public : 
        void set_gpa(double gpa);
        double get_gpa() const;
};

void Student::set_gpa(double gpa) {
    gpa_ = gpa;
    assert(gpa_ >= 0 && gpa_ <= 4.0); // gpa는 학점을 의미함.
}

double Student::get_gpa() const { return gpa_; }

int main() {
    Person person;
    person.set_id(123456789L);
    std::cout << "Person's ID: " << person.get_id() << std::endl << std::endl;
    Student student;
    student.set_id(987654321L);
    student.set_gpa(3.9);
    std::cout << "Student's ID: " << student.get_id() << std::endl;
    std::cout << "Student's GPA: " << student.get_gpa();
    return 0;
    
}