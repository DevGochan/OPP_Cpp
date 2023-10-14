#include "square.h"
#include "rectangle.h"

int main() {
    // Square 클래스를 인스턴스화하고 사용
    cout << "정사각형의 정보" << endl;
    Square square(5);
    square.print();
    cout << "넓이: " << square.getArea() << endl;
    cout << "둘레: " << square.getPerimeter() << endl;
    cout << endl;

    // Rectangle 클래스를 인스턴스화하고 사용
    cout << "직사각형의 정보" << endl;
    Rectangle rectangle(5, 4);
    rectangle.print();
    cout << "넓이: " << rectangle.getArea() << endl;
    cout << "둘레: " << rectangle.getPerimeter() << endl;
    cout << endl;
}