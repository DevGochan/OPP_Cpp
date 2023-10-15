#pragma once

#include <string>

class Product {
    std::string name_;
    double unit_price_;

    public :
        Product(const std::string& name, double unit_price);
        ~Product() = default;
        double get_price() const;  
};