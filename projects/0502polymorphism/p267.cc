#include <iostream>

class Base {
    public:
        virtual void print() const { std::cout << "In the base class" << std::endl; }
};

class Derived : public Base {
    public:
        void print() const override { std::cout << "In the derived class" << std::endl; }
};

int main() {
    Base* ptr = new Base();
    ptr->print();
    delete ptr;
    ptr = new Derived();
    ptr->print();
    delete ptr;
    return 0;
}