#include <iostream>

using namespace std;

int n;
void set() {
    ::n = 10;
}

namespace ghc {
    int n;
    void set() {
        ghc::n = 20;
    }
}


namespace asdf {
    int n;
    void set() {
        asdf::n = 30;
    }
} 


int main() {
    ::set();
    ghc::set();
    asdf::set();

    cout << ::n << endl;
    cout << ghc::n << endl;
    cout << asdf::n << endl;
}