#include "mediator.h"

void Employee1::getMessage(string message) {
    cout << "Employee1 객체가 메시지를 받았습니다: " << message << endl;
}

void Employee2::getMessage(string message) {
    cout << "Employee2 객체가 메시지를 받았습니다: " << message << endl;
}

void Employee3::getMessage(string message) {
    cout << "Employee3 객체가 메시지를 받았습니다: " << message << endl;
}

void Employee4::getMessage(string message) {
    cout << "Employee4 객체가 메시지를 받았습니다: " << message << endl;
}

Mediator::Mediator() {
    employees.push_back(new Employee1());
    employees.push_back(new Employee2());
    employees.push_back(new Employee3());
    employees.push_back(new Employee4());
}

Mediator::~Mediator() {
    for(int i = 0; i < employees.size(); i++) {
        delete employees[i];
    }
}

void Mediator::sendMessage(string message) {
    for(int i = 0; i < employees.size(); i++) {
        employees[i] -> getMessage(message);
    }
}