#pragma once
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

class Vacation { // 모든 패키지의 베이스 클래스가 되는 Vacation 추상 클래스
    public :
        virtual void bookHotels() = 0;
        virtual void bookFlights() = 0;
        virtual void bookTours() = 0;
};

class Package1 : public Vacation { // 첫 번째 구체 클래스
    public :
        void bookHotels();
        virtual void bookFlights();
        virtual void bookTours();
};

class Package2 : public Vacation {  // 두 번째 구체 클래스
    public :
        void bookHotels();
        virtual void bookFlights();
        virtual void bookTours();
}; 

class Package3 : public Vacation {  // 세 번째 구체 클래스
    public :
        void bookHotels();
        virtual void bookFlights();
        virtual void bookTours();
};

class Director { // 정적 멤버를 갖는 Director 클래스
    public :
        static Vacation* vacation;
        static void book(int type); // 클라이언트는 이 함수만 호출 가능
};

