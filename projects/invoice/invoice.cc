#include <iostream>

#include "invoice.hpp"

Invoice::Invoice(int invoice_num) 
    : invoice_number_(invoice_num), invoice_total_(0.0) {}

void Invoice::add(int quantity, const Product& product) {
    invoice_total_ += quantity * product.get_price();
}

void Invoice::print() const {
    std::cout << "Invoice Number: " << invoice_number_ << std::endl;
    std::cout << "Invoice total: " << invoice_total_ << std::endl;
}