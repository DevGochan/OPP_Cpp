#include "facade.h"

LivingRoom::LivingRoom(double s) : size(s) {}
void LivingRoom::draw() {
    cout << "거실의 크기는 " << size;
    cout << "평방 피트로 그립니다." << endl;
}

BedRoom::BedRoom(double s) : size(s) {}
void BedRoom::draw() {
    cout << "침실의 크기는 " << size;
    cout << "평방 피트로 그립니다." << endl;
}

Kitchen::Kitchen(double s) : size(s) {}
void Kitchen::draw() {
    cout << "부엌의 크기는 " << size;
    cout << "평방 피트로 그립니다." << endl;
}

BathRoom::BathRoom(double s) : size(s) {}
void BathRoom::draw() {
    cout << "욕실의 크기는 " << size;
    cout << "평방 피트로 그립니다." << endl;
}

House::House(double s) : size(s) {}
void House::draw() {
    LivingRoom livingRm(size * 0.35);
    livingRm.draw();
    BedRoom bedRm(size * 0.35);
    bedRm.draw();
    Kitchen kitchen(size * 0.15);
    kitchen.draw();
    BathRoom bathRm(size * 0.15);
    bathRm.draw();
}