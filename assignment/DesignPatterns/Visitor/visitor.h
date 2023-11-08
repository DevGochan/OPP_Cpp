#pragma once
#include <iostream>
#include <string>
using namespace std;

class Visitor {
    public :
        virtual void visit() = 0;
};

class EnglishVisitor : public Visitor {
    public :
        void visit();
};

class FrenchVisitor : public Visitor {
    public :
        void visit();
};

class SpanishVisitor : public Visitor {
    public :
        void visit();
};