#pragma once
#include <iostream>
#include <string>
using namespace std;

class President {
    private :
        string name;
        static President* ptr;  // 정적 변수
        President(string name); // private 생성자
    public :
        static President* create(string name); // 정적 함수
        string getName() const;
};