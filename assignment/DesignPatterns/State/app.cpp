#include "state.h"

int main() {
    Light* light = new Light;
    State* state = new OffState;
    light -> setState(state);

    light -> turnSwitch();
    light -> turnSwitch();
    light -> turnSwitch();

    delete state;
    delete light;
    return 0;
}