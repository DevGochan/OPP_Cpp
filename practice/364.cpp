#include <iostream>
#include <cassert>
using namespace std;

class Rectangle {
    private :
        double length;
        double height;

    public :
        Rectangle(double length, double height);
        Rectangle(const Rectangle& rect);
        ~Rectangle();
        void print() const;
        double getArea() const;
        double getPerimeter() const;
};

Rectangle::Rectangle(double len, double hgt) : length(len), height(hgt) {
    if((length <= 0.0) || (height <= 0.0)) {
        cout << "Rectangle 객체를 생성할 수 없습니다." << endl;
        assert(false);
    }
}

Rectangle::Rectangle(const Rectangle& rect) : length(rect.length), height(rect.height){}

Rectangle::~Rectangle(){}

void Rectangle::print() const {
    cout << "사각형의 너비: " << length << ", 높이: " << height << endl;
}

double Rectangle::getArea() const {
    return(length * height);
}

double Rectangle::getPerimeter() const {
    return(2 * (length + height));
}

int main() {
    Rectangle rect1(3.0, 4.2);
    Rectangle rect2(5.1, 10.2);
    Rectangle rect3(rect2);

    cout << "사각형1: ";
    rect1.print();
    cout << "넓이: " << rect1.getArea() << endl;
    cout<< "둘레: " << rect1.getPerimeter() << endl;

    cout << "사각형2: ";
    rect1.print();
    cout << "넓이: " << rect2.getArea() << endl;
    cout<< "둘레: " << rect2.getPerimeter() << endl;

    cout << "사각형3: ";
    rect1.print();
    cout << "넓이: " << rect3.getArea() << endl;
    cout<< "둘레: " << rect3.getPerimeter() << endl;

    return 0;
}
