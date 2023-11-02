#include "builder.h"

Vacation* Director::vacation = 0;

void Director::book(int packageType) {
    if (packageType == 1) {
        vacation = new Package1();
    } else if (packageType == 2) {
        vacation = new Package2();
    } else if (packageType == 3) {
        vacation = new Package3();
    }
    cout << "여행 계획에 대한 정보: " << endl;
    vacation -> bookHotels();
    vacation -> bookFlights();
    vacation -> bookTours();
    cout << endl;
}

void Package1::bookHotels() {
    cout << "호텔 예약" << endl;
}
void Package1::bookFlights() {
    cout << "항공권 예약" << endl;
}
void Package1::bookTours() {}

void Package2::bookHotels() {
    cout << "호텔 예약" << endl;
}
void Package2::bookFlights() {}
void Package2::bookTours() {
    cout << "투어 예약" << endl;
}

void Package3::bookHotels() {
    cout << "호텔 예약" << endl;
}
void Package3::bookFlights() {
    cout << "항공권 예약" << endl;
}
void Package3::bookTours() {
    cout << "투어 예약" << endl;
}