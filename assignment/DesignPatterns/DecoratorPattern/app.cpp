#include "decorator.h"

int main() {
    Decorator decor1(Component("안녕하세요!"));
    decor1.draw();
    Decorator decor2(Component("안녕하세요 여러분!"));
    decor2.draw();
    Decorator decor3(Component("데코레이터 패턴 예제이니다!"));
    decor3.draw();
    return 0;
}