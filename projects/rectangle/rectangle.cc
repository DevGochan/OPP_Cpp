#include "rectangle.hpp"

#include <iostream>
#include <cassert>

int Rectangle::count_ = 0; // 정적데이터멤버 정의

int Rectangle::get_count() { return count_; } //정적멤버함수 정의. count는 인스턴스를 추적함


Rectangle::Rectangle(double len, double hgt) : length_(len), height_(hgt) {
  if(length_ <= 0.0 || height_ <= 0.0) {
    std::cerr << "No Rectangle can be made" << std::endl;
    assert(false);
  }
  ++count_;
} // 생성자 부분. 값을 판별함. 불변조건

Rectangle::Rectangle(const Rectangle& rect) 
  : length_(rect.length_), height_(rect.height_) { ++count_; }

Rectangle::~Rectangle() { --count_; }

void Rectangle::print() const {
  std::cout << "Len: " << length_
            << ", hgt: " << height_ << std::endl;
}

double Rectangle::get_area() const {
  return length_ * height_;
}

double Rectangle::get_perimeter() const {
  return 2 * (length_ + height_);
}