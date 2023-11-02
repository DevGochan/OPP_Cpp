#include "memento.h"

Originator::Originator() { memento = new Memento; }
Originator::~Originator() { delete memento; }
string Originator::getState() const { return state; }
void Originator::setState(string st) {
    memento -> setState(state);
    state = st;
}
void Originator::restoreState() {
    state = memento -> getState();
}
string Memento::getState() const { return state; }
void Memento::setState(string st) { state = st; }