#include <person.h>

Person::Person(string nm)
:name(nm){}

Person::~Person(){}

void Person::print() const{
    cout << "이름: " << name << endl;
}