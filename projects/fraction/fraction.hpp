#pragma once

#include <iostream>

class Fraction {
    int n_; // numerator;
    int d_; // denominator;

    int Gcd(int n, int m = 1); // 최대공약수
    void Normalize(); // Gcd 호출해서 사용. 기약분수화

    public :
        Fraction(int n, int d = 1); // 기본 매개변수. 두가지 형태로 호출가능, 1= Fraction에 정수형데이터 하나 전달. 2= 정수형데이터 두개 전달.
        Fraction(double value);
        Fraction();
        Fraction(const Fraction& fract) = default;
        ~Fraction() = default;


// 멤버함수 오버로딩
        operator double() const; // 연산자 오버로딩
        Fraction operator+() const; // 단항연산자 오버로딩. 멤버함수 오버로딩. 
        Fraction operator-() const;
        Fraction& operator++(); // 전위증가 전위감소. lvalue반환해야 해서 참조를 반환함.
        Fraction& operator--();
        Fraction operator++(int); // 후위증각 후위감소. rvalue반환. a++++연산 불가.
        Fraction operator--(int); // 시그니처 구분을 위해서 int라는 더미 데이터를 넣음
        
        Fraction& operator=(const Fraction& right);
        Fraction& operator+=(const Fraction& right);
        Fraction& operator-=(const Fraction& right);
        Fraction& operator*=(const Fraction& right);
        Fraction& operator/=(const Fraction& right);

// 비멤버함수 오버로딩
// 다른영역의 객체가 이 ㅇ클래스 파일에 접근할 권한을 주는게 friend (세터게터 도움없이 프라이베이트 접근가능)
        friend Fraction operator+( const Fraction& left, const Fraction& right);
        friend Fraction operator-( const Fraction& left, const Fraction& right);
        friend Fraction operator*( const Fraction& left, const Fraction& right);
        friend Fraction operator/( const Fraction& left, const Fraction& right);
        
        friend bool operator==(const Fraction& left, const Fraction& right);
        friend bool operator!=(const Fraction& left, const Fraction& right);
        friend bool operator<(const Fraction& left, const Fraction& right);
        friend bool operator<=(const Fraction& left, const Fraction& right);
        friend bool operator>=(const Fraction& left, const Fraction& right);
        friend bool operator>(const Fraction& left, const Fraction& right);

        friend std::istream& operator >> (std::istream& left, Fraction& right);      
        friend std::ostream& operator << (std::ostream& left, const Fraction& right);      
};