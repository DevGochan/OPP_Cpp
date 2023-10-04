#include "mystring.hpp"  // [NOLINT]

#include <iostream>
#include <cstring>

MyString::MyString(int capacity) {
  string_ = new char[capacity];
  length_ = 0;
  capacity_ = capacity;
}

MyString::MyString(const char* str) {
  length_ = std::strlen(str);
  capacity_ = length_;
  string_ = new char[length_];
  for (int i = 0; i != length_; ++i)
    string_[i] = str[i];
}


MyString::MyString(const MyString& str) {
  length_ = str.length_;
  capacity_ = str.length_;
  string_ = new char[length_];
  for (int i = 0; i != length_; ++i)
    string_[i] = str.string_[i];
}

MyString::~MyString() { delete[] string_; }

int MyString::length() const { return length_; }

int MyString::capacity() const { return capacity_; }



void MyString::reserve(int size) {
  // If the reserved size is less than the current capacity,
  // nothing needs to be done.
  if (size > capacity_) {
    char* prev_string = string_;
    string_ = new char[size];
    capacity_ = size;
    for (int i = 0; i != length_; ++i)
      string_[i] = prev_string[i];
    delete[] prev_string;
  }
}

void MyString::println() const {
  for (int i = 0; i != length_; ++i)
    std::cout << string_[i];
  std::cout << std::endl;
}


MyString& MyString::insert(int pos, const MyString& str) {
  if (pos < 0 || pos > length_)
    return *this;

  if (length_ + str.length_ > capacity_) {
    int new_capacity;
    if (capacity_ * 2 > length_ + str.length_)
      new_capacity = capacity_ * 2;
    else
      new_capacity = length_ + str.length_;

    char* prev_string = string_;
    string_ = new char[new_capacity];

    int i = 0;
    while (i < pos) {
      string_[i] = prev_string[i];
      ++i;
    }


    for (int j = 0; j < str.length_; ++j)
      string_[i+j] = str.string_[j];
    while (i < length_) {
      string_[i+str.length_] = prev_string[i];
      ++i;
    }
    delete[] prev_string;
    capacity_ = new_capacity;  // update capacity
  } else {
    for (int i = length_ - 1; i >= pos; --i)
      string_[i+str.length_] = string_[i];
    for (int i = 0; i < str.length_; ++i)
      string_[i+pos] = str.string_[i];
  }
  length_ += str.length_;

  return *this;
}



MyString& MyString::insert(int pos, const char* str) {
  MyString temp(str);
  return insert(pos, temp);
}

MyString& MyString::insert(int pos, char c) {
  MyString temp(c);
  return insert(pos, temp);
}

MyString& MyString::erase(int pos, int num) {
  if (num < 0 || pos < 0 || pos >= length_)
    return *this;

  if (pos + num > length_)
    num = length_ - pos;
  for (int i = pos + num; i < length_; i++)
    string_[i-num] = string_[i];
  length_ -= num;
  return *this;
}


MyString& MyString::insert(int pos, const char* str) {
    MyString temp(str);
    return insert(pos, temp);
}

MyString& MyString::erase(int pos, int num) { // pos위치로부터 num얼만큼의 길이를 제거할거냐
    if (num < 0 || pos < 0 || pos >= length_)
        return *this;
    if(pos + num > length_)
        num = length_ - pos;
    for (int i = pos + num; i < length_; ++i)
        string_[i-num] = string_[i];
    length_ -= num;
    return *this;
}