#include <string>
#include "proxy.h"

void Real::draw(int x, int y) {
    cout << "객체를 " << x << ", " << y << "위치에 그렸습니다." << endl;
}

void Real::erase() {
    cout << "객체를 지웠습니다." << endl;
}

Proxy::Proxy() { real = 0; }
Proxy::~Proxy() { delete real; }

void Proxy::draw(int x, int y) {
    if (real == 0) {
        real = new Real;
    }
    real -> draw(x, y);
}

void Proxy::erase() { real -> erase(); }
