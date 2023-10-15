#pragma once

#include <string>

class Name {
    std::string first_;
    std::string init_;
    std::string last_;

    public :
        Name(const std::string& first,
                std::string& init,
                std::string& last)
        ~Name() = default;
        void print() const;
}