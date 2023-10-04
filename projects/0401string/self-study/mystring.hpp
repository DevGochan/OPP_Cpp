#pragma once

class MyString {
    char* string_;
    int length_;
    int capacity_; // 데이터 멤버들은 이름 뒤쪽에 언더바를 추가해주면 나중에 구분이 용이함
    

    public:
        explicit MyString(int cap); // explicit 키워드는 원치않는 형변환이 일어나지 않도록 제한함
        MyString(const char* str);
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