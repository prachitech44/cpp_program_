// By Prachi
#include <iostream>
using namespace std;

class A {
    int x, y;

public:
    // constructor with default values (use initializer list)
    A(int a = 0, int b = 0) : x(a), y(b) {}

    // print values (const because it doesn't modify the object)
    void show() const {
        cout << x << ", " << y << endl;
    }

    // operator+ as a const member taking a const reference
    A operator+(const A &p) const {
        return A(x + p.x, y + p.y);
    }
};

int main() {
    A ob1(10, 20), ob2(5, 30);

    cout << "ob1: "; ob1.show();   // 10, 20
    cout << "ob2: "; ob2.show();   // 5, 30

    A ob3 = ob1 + ob2;             // uses overloaded operator+
    cout << "ob3 = ob1 + ob2: "; ob3.show(); // 15, 50

    // you can also assign result back
    ob1 = ob1 + ob2;
    cout << "ob1 after ob1 = ob1 + ob2: "; ob1.show(); // 15, 50

    return 0;
}