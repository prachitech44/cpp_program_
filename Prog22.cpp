// By Prachi
#include <iostream>
using namespace std;

class A {
    int a, b;
    float c, d;

public:
    A() { 
        a = 0; 
        b = 0; 
        c = 0; 
        d = 0; 
    }

    void add(int a, int b);      // int + int
    void add(int a, float c);    // int + float
    void add(float c, float d);  // float + float
    void add(float c, int a);    // float + int
};

// ---------------- FUNCTION DEFINITIONS -----------------

void A::add(int a, int b) {
    int x = a + b;
    cout << "add(int, int) = " << x << endl;
}

void A::add(int a, float c) {
    float y = a + c;
    cout << "add(int, float) = " << y << endl;
}

void A::add(float c, float d) {
    float x = c + d;
    cout << "add(float, float) = " << x << endl;
}

void A::add(float c, int a) {
    float y = c + a;
    cout << "add(float, int) = " << y << endl;
}

// ---------------- MAIN FUNCTION -----------------

int main() {
    A x;

    x.add(2, 3);       // int, int
    x.add(2, 3.5f);    // int, float
    x.add(2.5f, 3.5f); // float, float
    x.add(2.5f, 5);    // float, int

    return 0;
}