#include "greeting.h"

void Greeting::accept(Visitor* v) { 
    v -> visit();
}