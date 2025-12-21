// By Prachi 
#include <iostream>
using namespace std;

class A {
    int a, b, c, d;

public:
    A() { a = 1; b = 0; c = 0; d = 0; }   // constructor

    void add();                          // no-arg
    void add(int x, int y);              // two-arg
    void add(int x, int y, int z);       // three-arg
};

// definitions
void A::add() {
    a++; 
    cout << "no-arg add -> a = " << a << endl;
}

void A::add(int x, int y) {
    c = x + y;
    cout << "two-arg add -> " << x << " + " << y << " = " << c << endl;
}

void A::add(int x, int y, int z) {
    d = x + y + z;
    cout << "three-arg add -> " << x << " + " << y << " + " << z << " = " << d << endl;
}

int main() {
    A z;
    z.add();            // no-arg
    z.add(1, 7);        // two-arg
    z.add(2, 3, 4);     // three-arg
    return 0;
}