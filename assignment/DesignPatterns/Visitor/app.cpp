#include "greeting.h"

int main() {
    Greeting greeting;
    Visitor* visitor1 = new EnglishVisitor;
    greeting.accept(visitor1);

    Visitor* visitor2 = new FrenchVisitor;
    greeting.accept(visitor2);

    Visitor* visitor3 = new SpanishVisitor;
    greeting.accept(visitor3);

    return 0;
}