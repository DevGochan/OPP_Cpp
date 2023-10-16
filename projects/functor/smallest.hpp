#pragma once

class Smallest {
    int value_;

    public :
        Smallest();
        int operator()(int next);
};