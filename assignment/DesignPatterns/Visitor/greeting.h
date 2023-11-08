#include <iostream>
#include <string>
#include "visitor.h"
using namespace std;

class Visitor;

class Greeting {
    public :
        void accept(Visitor*);
};