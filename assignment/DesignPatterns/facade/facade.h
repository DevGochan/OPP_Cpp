#pragma once
#include <string>
#include <iostream>
using namespace std;

class LivingRoom {
    private:
        double size;
    public :
        LivingRoom(double size);
        void draw();
};

class BedRoom {
    private :
        double size;
    public :
        BedRoom(double size);
        void draw();
};

class Kitchen {
    private:
        double size;
    public :
        Kitchen(double size);
        void draw();
};

class BathRoom {
    private:
        double size;
    public :
        BathRoom(double size);
    void draw();
};

class House { // 퍼사드 클래스
    private:
        double size;
    public :
        House(double size);
        void draw();
};