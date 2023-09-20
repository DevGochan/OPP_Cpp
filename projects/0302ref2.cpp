#include <iostream>
void swap(int& first, int& second);

int main() {
    int x = 10, y = 20;
    std::cout << "Values of x and y before swapping\n";
    std::cout << "x: " << x  << ", y: " << y << '\n';
    swap(x,y);
    std::cout << "Values of x and y after swapping\n";
    std::cout << "x: " << x  << ", y: " << y << '\n';
    return 0;
}

void swap(int& first, int& second) {
    int temp = first;
    first = second;
    second = temp;
}