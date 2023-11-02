#include "president.h"

President* President::ptr = 0; // 정적 변수의 정의

President::President(string nm) : name(nm) { // private 생성자 정의
    cout << "대표가 선택되었습니다." << endl;
}

President* President::create(string name) { // create 정적 함수의 정의
    if(!ptr) {
        ptr = new President(name);
    } else {
        cout << "이미 대표가 존재합니다!" << endl;
    }
    return ptr;
}

string President::getName() const { // 접근자 함수
    return name;
}