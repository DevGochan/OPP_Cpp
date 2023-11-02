#include "composite.h"

int main() {
    cout << "Point 객체 만들고 출력하기" << endl;
    Point point(7.77, 2.24);
    point.show();
    cout << endl;

    cout << "Multipoint 객체 만들고 출력하기" << endl;
    Multipoint multipoint;
    multipoint.addPoint(new Point(3.22, 4.51));
    multipoint.addPoint(new Point(4.12, 8.32));
    multipoint.addPoint(new Point(1.12, 7.44));
    multipoint.show();
    cout << endl;
    return 0;
}