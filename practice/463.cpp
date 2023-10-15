#include <iostream>
using namespace std;

void swap(int& first, int& second);

int main() {
    int x = 10;
    int y = 20;

    cout << "스왑 이전 x: " << x << endl;
    cout << "스왑 이전 y: " << y << endl;

    swap(x, y);

    cout << "스왑 이후 x: " << x << endl;
    cout << "스왑 이후 y: " << y << endl;
}


void swap(int& rX, int& rY) {
    int temp = rX;
    rX = rY;
    rY = temp;
}