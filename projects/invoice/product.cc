#include "product.hpp"

Product::Product(const std::string& name, double price) :
    name_(name), unit_price_(price) {}

double Product::get_price () const { return unit_price_; }