#include "state.h"

void Light::setState(State* st) { state = st; }
void Light::deleteState() { delete state; }
void Light::turnSwitch() { state -> handle(this); }

void OffState::handle(Light* light) {
    cout << "불을 켭니다." << endl;
    light -> deleteState();
    light -> setState(new OnState);
}

void OnState::handle(Light* light) {
    cout << "불을 끕니다." << endl;
    light -> deleteState();
    light -> setState(new OffState);
}

