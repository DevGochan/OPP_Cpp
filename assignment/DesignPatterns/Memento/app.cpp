#include "memento.h"

int main() {
    Originator originator;
    originator.setState("안녕하세요");
    cout << originator.getState() << endl;
    originator.setState("안녕");
    cout << originator.getState() << endl;
    originator.restoreState();
    cout << originator.getState() << endl;
    return 0;
}