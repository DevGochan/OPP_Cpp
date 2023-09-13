/* 객체지향 프로그래밈ㅇ에서 클래스를 사용하는 예*/

#include <iostream>
using namespace std;

// 클래스 정의
// 매개변수 생성자, 기본 생성자
// 복사 생성자, 소멸자, 멤버 함수를 선언


class Circle {
    private:
        double radius;
    public:
        Circle(double radius); // 매개변수가 있는 생성자
        Circle();               // 기본 생성자
        ~Circle();              // 소멸자
        Circle(const Circle& circle);   // 복사 생성자
        void setRadius(double radius);  // 설정자
        double getRadius() const;   // 접근자
        double getArea() const;     //접근자
        double getPerimeter() const;  // 접근자      
};


// 멤버 함수 정의
// 매개변수가 있는 생성자, 기본 생성자
// 복사 생성자, 소멸자, 멤버 함수를 정의


// 매개변수가 있는 생성자의 정의
Circle::Circle(double rds)
: radius(rds)
{
    cout << "매개변수가 있는 생성자가 호출되었습니다. " << endl;
}

// 기본 