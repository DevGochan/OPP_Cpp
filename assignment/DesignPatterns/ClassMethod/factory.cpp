#include "factory.h"

Shape* Shape::factory(string type) {
    if (type == "square") {
        return(Square::factory());
    } else if (type == "circle") {
        return(Circle::factory());
    } else {
        cout << "주어진 형태의 도형 객체를 생성할 수 없습니다.";
        assert(false);
    }
}

Shape::~Shape(){}
Square::Square(){}
Shape* Square::factory() {
    return new Square();
}
void Square::draw() {
    cout << "Square 객체를 그렸습니다." << endl;
}
Shape* Circle::factory() {
    return new Circle();
}
Circle::Circle(){}
void Circle::draw() {
    cout << "Circle 객체를 그렸습니다." << endl;
}
