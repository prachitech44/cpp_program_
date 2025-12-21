// By Peachi
#include <iostream>
using namespace std;

class A {
public:
    static int a;   // static variable declaration
};

// static variable definition
int A::a;

int main() {

    A::a = 30;   // initialize static variable (no object needed)

    cout << "Initial value of a = " << A::a << endl;

    A x;         // object creation
    cout << "This is x.a = " << x.a << endl;

    return 0;
}