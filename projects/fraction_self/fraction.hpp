#pragma once
#include <iostream>

class Fraction {
    int numer_;
    int denom_;

    int Gcd(int n, int m = 1); // using default parameters
    void Normalize();

    public :
        Fraction(int numer, int denom);
        Fraction(double value);
        Fraction();
        Fraction(const Fraction& fract) = default;
        ~Fraction() = default;

        operator double() const;
        const Fraction operator+() const;
        const Fraction operator-() const;
        Fraction& operator++();
        Fraction& operator--();
        const Fraction operator++(int);
        const Fraction operator--(int);
        Fraction& operator=(const Fraction& right);
        Fraction& operator+=(const Fraction& right);
        Fraction& operator-=(const Fraction& right);
        Fraction& operator*=(const Fraction& right);
        Fraction& operator/=(const Fraction& right);
        friend const Fraction operator+(const Fraction& left, const Fraction& right);
        friend const Fraction operator-(const Fraction& left, const Fraction& right);
        friend const Fraction operator*(const Fraction& left, const Fraction& right);
        friend const Fraction operator/(const Fraction& left, const Fraction& right);
        friend bool operator==(const Fraction& left, const Fraction& right);
        friend bool operator!=(const Fraction& left, const Fraction& right);
        friend bool operator<(const Fraction& left, const Fraction& right);
        friend bool operator<=(const Fraction& left, const Fraction& right);
        friend bool operator>(const Fraction& left, const Fraction& right);
        friend bool operator>=(const Fraction& left, const Fraction& right);
        friend std::istream& operator>>(std::istream& left, Fraction& right);
        friend std::istream& operator<<(std::ostream& left, cibst Fraction& right);
};