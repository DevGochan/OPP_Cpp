#include "fraction.hpp"

#include <iostream>
#include <cassert>
#include <cmath>

Fraction::Fraction(int num, int den = 1) : numer_(num), denom_(den) {
    Normalize();
}

Fraction::Fraction(double value) : denom_(1) {
    while ((value - static_cast<int>(value)) > 0.0) {
        value *= 10.0;
        denom_ *= 10;
    }
    numer_ = static_cast<int>(value);
    Normalize();
}

Fraction::Fraction() : numer_(0), denom_(1) {}

Fraction::operator double() const {
    double num = static_cast<double>(numer_);
    return (num / denom_);
}

const Fraction Fraction::operator+() const {
    Fraction temp(+numer_, denom_);
    return temp;
}

const Fraction Fraction::operator-() const {
    Fraction temp(-numer_, denom_);
    return temp;
}

const Fraction Fraction::operator++(int) {
  Fraction temp(numer_, denom_);
  ++(*this);
  return temp;
}

const Fraction Fraction::operator--(int) {
  Fraction temp(numer_, denom_);
  --(*this);
  return temp;
}

// Assignment operator
Fraction& Fraction::operator=(const Fraction& right) {
  if (*this != right) {
    numer_ = right.numer_;
    denom_ = right.denom_;
  }
  return *this;
}

// Compound Assignment operator(+=)
Fraction& Fraction::operator+=(const Fraction& right) {
  numer_ = numer_ * right.denom_ + denom_ * right.numer_;
  denom_ = denom_ * right.denom_;
  Normalize();
  return *this;
}


// Compound Assignment operator(-=)
Fraction& Fraction::operator-=(const Fraction& right) {
  numer_ = numer_ * right.denom_ - denom_ * right.numer_;
  denom_ = denom_ * right.denom_;
  Normalize();
  return *this;
}

// Compound Assignment operator(*=)
Fraction& Fraction::operator*=(const Fraction& right) {
  numer_ = numer_ * right.numer_;
  denom_ = denom_ * right.denom_;
  Normalize();
  return *this;
}

// Compound Assignment operator(/=)
Fraction& Fraction::operator/=(const Fraction& right) {
  numer_ = numer_ * right.denom_;
  denom_ = denom_ * right.numer_;
  Normalize();
  return *this;
}

// Addition operator(friend)
const Fraction operator+(const Fraction& left, const Fraction& right) {
  int new_numer = left.numer_ * right.denom_ + right.numer_ * left.denom_;
  int new_denom = left.denom_ * right.denom_;
  Fraction result(new_numer, new_denom);
  return result;
}

// Subtraction operator(friend)
const Fraction operator-(const Fraction& left, const Fraction& right) {
  int new_numer = left.numer_ * right.denom_ - right.numer_ * left.denom_;
  int new_denom = left.denom_ * right.denom_;
  Fraction result(new_numer, new_denom);
  return result;
}

// Multiplication operator(friend)
const Fraction operator*(const Fraction& left, const Fraction& right) {
  int new_numer = left.numer_ * right.numer_;
  int new_denom = left.denom_ * right.denom_;
  Fraction result(new_numer, new_denom);
  return result;
}

// Division operator(friend)
const Fraction operator/(const Fraction& left, const Fraction& right) {
  int new_numer = left.numer_ * right.denom_;
  int new_denom = left.denom_ * right.numer_;
  Fraction result(new_numer, new_denom);
  return result;
}

// Equality operator(friend)
bool operator==(const Fraction& left, const Fraction& right) {
  return (left.numer_ * right.denom_ == right.numer_ * left.denom_);
}

// Inequality operator(friend)
bool operator!=(const Fraction& left, const Fraction& right) {
  return(left.numer_ * right.denom_ != right.numer_ * left.denom_);
}


// Less-than operator(friend)
bool operator<(const Fraction& left, const Fraction& right) {
  return(left.numer_ * right.denom_< right.numer_ * left.denom_);
}

// Less-than or equal operator(friend)
bool operator<=(const Fraction& left, const Fraction& right) {
  return(left.numer_ * right.denom_<= right.numer_ * left.denom_);
}

// Greater-than operator(friend)
bool operator>(const Fraction& left, const Fraction& right) {
  return(left.numer_ * right.denom_ > right.numer_ * left.denom_);
}

// Greater-than or equal operator(friend)
bool operator>=(const Fraction& left, const Fraction& right) {
  return(left.numer_ * right.denom_ >= right.numer_ * left.denom_);
}

// Extraction operator(friend)
std::istream& operator>>(std::istream& left, Fraction& right) {
  std::cout << "Enter the value of numerator: ";
  left >> right.numer_;
  std::cout << "Enter the value of denominator: ";
  left >> right.denom_;
  right.Normalize();

  return left;
}

// Insertion operator(friend)
std::ostream& operator<<(std::ostream& left, const Fraction& right) {
  left << right.numer_ << "/" << right.denom_;
  return left;
}

// Helper function(greatest common divisor)
int Fraction::Gcd(int n, int m) {
  int gcd = 1;
  for (int k = 1; k <= n && k <= m; ++k) {
    if (n % k == 0 && m % k == 0)
      gcd = k;
  }
  return gcd;
}

// Helper function(Normalizing a fraction)
void Fraction::Normalize() {
  if (denom_ == 0) {
    std::cout<< "Invalid denom_ination in fraction. Need to quit."<< std::endl;
    assert(false);
  }
  if (denom_< 0) {
    denom_ = -denom_;
    numer_ = -numer_;
  }
  int divisor = Gcd(std::abs(numer_), std::abs(denom_));
  numer_ = numer_ / divisor;
  denom_ = denom_ / divisor;
}
