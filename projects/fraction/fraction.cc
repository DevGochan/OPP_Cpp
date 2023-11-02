#include "fraction.hpp"

#include <iostream>
#include <cassert>
#include <cmath>

Fraction::Fraction(int num, int den) : n_(num), d_(den) {
    Normalize();
}

Fraction::Fraction(double value) : d_(1) {
    while ((value - static_cast<int>(value)) > 0.0) {
        value *= 10.0;
        d_ *= 10;
    }
    n_ = static_cast<int>(value);
    Normalize();
}

Fraction::Fraction() : n_(0), d_(1) {}

Fraction:: operator double() const {
    double num = static_cast<double>(n_);
    return n_ / d_;
}

Fraction Fraction::operator+() const {
    Fraction temp(+n_, d_); // 임시객체 만들때 분자에 플러스 붙여서 반환
    return temp;
}

Fraction Fraction::operator-() const {
    Fraction temp(-n_, d_);
    return temp;
}

Fraction& Fraction:: operator++() {
    n_ += d_;
    Normalize();
    return *this;
}

Fraction& Fraction:: operator--() {
    n_ -= d_;
    Normalize();
    return *this;
}

Fraction Fraction::operator++(int) { // 원본값을 반환하면서 실제값은 바뀌는 연산
    Fraction temp(n_, d_);
    ++(*this); // 실제로 호스트 객체의 값을 변화시켜주는 부분 
    return temp;
}

Fraction Fraction::operator--(int) {
    Fraction temp(n_, d_);
    --(*this);
    return temp;
}

Fraction& Fraction::operator=(const Fraction& right) {
    if (this == &right)
        return *this;
    n_ = right.n_;
    d_ = right.d_;
    return *this;
}

Fraction& Fraction::operator+=(const Fraction& right) {
    n_ = n_ * right.d_ + d_ * right.n_; // 분모 통일
    d_ = d_ * right.d_;
    Normalize();
    return *this;
}

Fraction& Fraction::operator-=(const Fraction& right) {
    n_ = n_ * right.d_ - d_ * right.n_; // 분모 통일
    d_ = d_ * right.d_;
    Normalize();
    return *this;
}

Fraction& Fraction::operator*=(const Fraction& right) {
    n_ *= right.d_;
    d_ *= right.n_;
    return *this;
}

Fraction& Fraction::operator/=(const Fraction& right) {
    return *this;
}

Fraction operator+(const Fraction& left, const Fraction& right) {
    int new_n = left.n_ * right.d_ + right.n_ * left.d_;
    int new_d = left.d_ * right.d_;
    Fraction result(new_n, new_d);
    return result;
};
Fraction operator-(const Fraction& left, const Fraction& right) {
    int new_n = left.n_ * right.d_ - right.n_ * left.d_;
    int new_d = left.d_ * right.d_;
    Fraction result(new_n, new_d);
    return result;
};
Fraction operator*(const Fraction& left, const Fraction& right) {
    int new_n = left.n_ * right.n_;
    int new_d = left.d_ * right.d_;
    Fraction result(new_n, new_d);
    return result;
};
Fraction operator/(const Fraction& left, const Fraction& right) {
    int new_n = left.n_ * right.d_;
    int new_d = left.d_ * right.n_;
    Fraction result(new_n, new_d);
    return result;
};
bool operator ==(const Fraction& left, const Fraction& right) {
    return left.n_ * right.d_ == right.n_ * left.d_;
};
bool operator !=(const Fraction& left, const Fraction& right) {
    return left.n_ * right.d_ != right.n_ * left.d_;
};
bool operator <(const Fraction& left, const Fraction& right) {
    return left.n_ * right.d_ < right.n_ * left.d_;
};
bool operator >(const Fraction& left, const Fraction& right) {
    return left.n_ * right.d_ > right.n_ * left.d_;
};
bool operator >=(const Fraction& left, const Fraction& right) {
    return left.n_ * right.d_ >= right.n_ * left.d_;
};

std::istream& operator>>(std::istream& left, Fraction& right) { // 입력스트림으로부터 데ㅣㅇ터를꺼내오는 추출연산자
    std::cout << "Enter the value of numerator: ";
    left >> right.n_;
    std::cout << "Enter the value of denominator: ";
    left >> right.d_;
    right.Normalize();
    return left;
}

std::ostream& operator<<(std::ostream& left, const Fraction& right) { // 출력스트림으로 데이터를 내보내는 
    left << right.n_ << "/" << right.d_;
    return left;
}

int Fraction::Gcd(int n, int m) {
    int gcd = 1;
    for (int k = 1; k <= n && k <= m; ++k) {
        if (n % k == 0 && m % k == 0)
            gcd = k;
    }
    return gcd;
}

void Fraction::Normalize() {
    if (!d_) {
        std::cout << "Invalid denomination";
        assert(false);
    }
    if (d_ < 0) {
        d_ = -d_;
        n_ = -n_;
    }
    int div = Gcd(std::abs(n_), std::abs(d_));
    n_ /= div;
    d_ /= div;
}