// By Prachi
#include <iostream>
using namespace std;

class A {
public:
    int a;

    A(int x) {      // parameterized constructor
        a = x;
    }
};

int main() {
    A x(10);        // passing value to constructor
    cout << x.a;    // printing value
    return 0;
}