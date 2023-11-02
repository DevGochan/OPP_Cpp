#include "vehicle.h"

Car::Car(string m, string c) : model(m), color(c) {
    cout << color << " " << model << " 자동차를 만들었습니다." << endl;
}

Car::Car(const Car& car) : model(car.model), color(car.color) {
    cout << color << " " << model << " 자동차를 만들었습니다." << endl;
}

Car* Car::clone() const {
    return new Car(*this);
}

Truck::Truck(string s, string c) : size(s), color(c) {
    cout << color << " " << size << " 트럭을 만들었습니다." << endl;
}

Truck::Truck(const Truck& truck) : size(truck.size), color(truck.color) {
    cout << color << " " << size << " 트럭을 만들었습니다." << endl;
}

Truck* Truck::clone() const {
    return new Truck(*this);
}