#pragma once
#include <iostream>
#include <cassert>

template <typename T>
class Stack {
        T* ptr_; // 힙영역 객체를 가리키는 포인터
        int cap_; // 힙영역 객체의 실제 사이즈
        int size_; // 그 공간에 실제로 담겨있는 데이터의 수

    public :
        explicit Stack(int cap) : cap_(cap), size_(0) { // 힙영역 객체의 크기를 받아와서 그 공간만큼 값을 넣어줌
            ptr_ = new T[cap]; // generic형을 cap만큼 담을 수 있는 동적 객체 생성
        }
        ~Stack() { delete[] ptr_; }

        void push(const T& elem) {
            if(size_ >= cap_) { // 이미 담을 수 있는 공간을 넘어섰다.
                std::cerr << "Can't push; the stack is full." << std::endl;
                assert(false); // assert로 프로그램 죽이는 건 고전적인 방법임. 지난시간에 배웠던 예외처리 (try-catch로 구성하는게 더 적절함)
            }
            ptr_[size_++] = elem;
        }

        T pop() {
            if (size_ <= 0) {
                std::cerr << "Can't pop; the stack is empty." << std::endl;
                assert(false);
            }
            return ptr_[--size_];
        }
};

