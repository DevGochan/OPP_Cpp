#pragma once

class MyString {
  char* string_;
  int length_;
  int capacity_;

 public:
  explicit MyString(int cap);
  MyString(const char* str);  // [NOLINT]
  MyString(const MyString& str);
  ~MyString();

  int length() const;
  int capacity() const;
  void reserve(int size);
  void println() const;
  MyString& insert(int pos, const MyString& str);
  MyString& insert(int pos, const char* str);
  MyString& insert(int pos, char c);
  MyString& erase(int pos, int num);
};
