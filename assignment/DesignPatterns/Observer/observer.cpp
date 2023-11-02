#include "observer.h"

void Subject::subscribe(Observer* observer) { observers.insert(observer); }
void Subject::unsubscribe(Observer* observer) { observers.erase(observer); }
void Subject::notify(int price) {
    set<Observer*>::iterator iter;
    for(iter = observers.begin(); iter != observers.end(); iter++) {
        (*iter) -> update(price);
    }
}

Observer1::Observer1(Subject* sj) : subject(sj) {}

void Observer1::update(int price) { cout << "Observer1: 현재 가격이 " << price << "이므로 구매합니다." << endl; }

Observer2::Observer2(Subject* sj) : subject(sj) {}

void Observer2::update(int price) { cout << "Observer2: 현재 가격이 " << price << "이므로 구매합니다." << endl; }