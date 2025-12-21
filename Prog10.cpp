// By Prachi
#include <iostream>
using namespace std;

class A {
    static int a;   // static member
    int b;          // non-static member

public:
    void set(int i, int j) {
        a = i;
        b = j;
    }

    void show();    // function declaration
};

// define static variable outside class
int A::a = 0;

// define show() function
void A::show() {
    cout << "static a = " << a << endl;
    cout << "non-static b = " << b << endl;
}

int main() {
    A x, y;

    x.set(1, 1);
    x.show();

    y.set(2, 2);
    y.show();

    return 0;
}