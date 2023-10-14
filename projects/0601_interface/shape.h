#pragma once
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

class Shape {
    protected :
        virtual bool isValid() const = 0; // 객체의 데이터 멤버를 검증하는 목적의 멤버 함수

    public :
        virtual void print() const = 0; // 출력을 목적으로 하는 멤버 함수
        virtual double getArea() const = 0; // 넓이를 구하는 멤버 함수
        virtual double getPerimeter() const = 0; // 둘레를 구하는 목적의 멤버 함수
};