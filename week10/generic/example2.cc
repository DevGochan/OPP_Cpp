#include <iostream>

template <typename T>
void exchange(T* op1, T* op2) {
    T temp = *op1;
    *op1 = *op2;
    *op2 = temp;
}

int main() {
    int i1 = 10, i2 = 20;
    exchange(&i1, &i2);
    std::cout << i1 << ' ' << i2 << std::endl;
    double d1 = 3.4, d2 = 5.6;
    exchange(&d1, &d2);
    std::cout << d1 << ' ' << d2 << std::endl;
    return 0;
}