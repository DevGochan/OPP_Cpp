#include "date.hpp"

#include <iostream>
#include <cassert>

Date::Date(int m, int d, int y) : month_(m), day_(d), year_(y) {
    if (month_ < 1 || month_ > 12) {
        std::cerr << "Month is out of range!";
        assert(false);
    }

    static int day_in_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (day_ < 1 || day_ > day_in_month[month_]) {
        std::cerr << "Day is out of range!";
        assert(false);
    }

    if (year_ < 1900 || year_ > 2099) {
        std::cerr << "Year is out of range!";
        assert(false);
    }
}

void Date::print() const {
    std::cout << month_ << '/' << day_ << '/' << year_ << std::endl;
}