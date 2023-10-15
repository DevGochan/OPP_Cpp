#pragma once

class Date {
    int month_;
    int day_;
    int year_;

    public :
        Date(int month, int day, int year);
        ~Date() = default;
        void print() const;
};