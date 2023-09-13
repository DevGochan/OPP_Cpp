#pragma once
// 헤더가드. 컴파일러가 컴파일할때 헤더파일들을 쭉 조사하고 심볼 하나를 만들어줌
class Rectangle {
 private : 
   double length_;
   double height_;
  static int count_; // 정적 데이터 멤버


public :
  Rectangle(double length, double height);
  Rectangle(const Rectangle& rect);
  ~Rectangle();

void print() const;
double get_area() const;
double get_perimeter() const;
static int get_count(); // 정적 멤버 함수
};