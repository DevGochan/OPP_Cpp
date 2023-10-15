#include <string>

class Course;

class Student {
    private :
        static const int kMaxCourse = 5;
        std::string name_;
        Course* course_[kMaxCourse] = {nullptr};

    public :
        Student(const std::string& n) : name_(n) {}

    void add_course(Course* course) {
        for (int i = 0; i < kMaxCourse; ++i) {
            if (course_[i]) continue;
            course_[i] = course;
            break;
        }
    }
};


class Course {
    private : 
        static const int kMaxStudent = 40;
        std::string title_;
        Student* student_[kMaxStudent] = {nullptr};

        public :
            Course(const std::string& t) : title_(t) {}

            void add_student(Student* student) {
                for (int i = 0; i < kMaxStudent; ++i) {
                    if (student_[i]) continue;
                    student_[i] = student;
                    student->add_course(this);
                    break;
                }
            }
};