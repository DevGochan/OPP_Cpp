#include "student.h"
#include "employee.h"

int main(){
    cout << "Person: " << endl;
    Person person("John");
    person.print();
    cout << endl << endl;

    cout << "Student: " << endl;
    Student student("Mary", 3.9);
    student.print();
    cout << endl << endl;

    cout << "Employee: " << endl;
    Employee Employee("Juan", 78000.00);
    Employee.print();
    cout << endl << endl;
    return 0;
}