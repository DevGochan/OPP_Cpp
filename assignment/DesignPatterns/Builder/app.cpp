#include "builder.h"

int main() {
    int type;
    do {
        cout << "여행 유형을 입력하세요(1, 2, 3): ";
        cin >> type;
    } while (type < 1 || type > 3);

    Director::book(type);
    return 0;
}