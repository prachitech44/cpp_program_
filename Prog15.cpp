// By Prachi
#include <iostream>
using namespace std;

class A {
    static int a;     // static variable

public:
    static void abc() {     // static member function
        cout << "Value of a = " << a << endl;
    }

    void bcd() {            // non-static function (needs object)
        a = 0;
        cout << "a is reset to 0\n";
    }
};

// definition of static variable
int A::a = 10;

int main() {
    A x, y;

    // call static function using object
    x.abc();

    // call static function using class name
    A::abc();

    // call non-static function using object
    x.bcd();

    // show updated value
    A::abc();

    return 0;
}