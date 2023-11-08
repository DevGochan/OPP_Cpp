#include "visitor.h"

void EnglishVisitor::visit() {
    cout << "Good Morning." << endl;
}

void FrenchVisitor::visit() {
    cout << "Bon Jour." << endl;
}

void SpanishVisitor::visit() {
    cout << "Buenos Dias." << endl;
}