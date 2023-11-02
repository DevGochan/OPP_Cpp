#include "president.h"

int main() {
    President * ptr; // 포인터 생성
    ptr = President::create("Mary");   // 첫 번째 대표 객체 생성
    cout << "대표의 이름 = " << ptr -> getName() << endl; 
    
    ptr = President::create("John"); // 두 번째 대표 객체 생성 시도
    cout << "대표의 이름 = " << ptr -> getName() << endl;
    return 0;
}