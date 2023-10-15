#pragma once

#include "product.hpp"

class Invoice {
    int invoice_number_;
    double invoice_total_;

    public :
        explicit Invoice (int invoice_number);
        ~Invoice() = default;
        void add(int quantity, const Product& product);
        void print() const;
};