#pragma once

class Array {
    double* ptr_;
    int size_;

    public :
        explicit Array(int size);
        double& operator[](int index) const;
        double& operator[](int index);
};