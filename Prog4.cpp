// By Prachi
#include <iostream>
using namespace std;

class A {
    int a = 1;
    int d = 3;

public:
    friend void a();   // friend function declaration
    void b();         // member function declaration
};

void A::b() {
    int c;
    c = a + d;        // b() is a member, so it can access private members directly
    cout << "A::b() -> a + d = " << c << endl;
}

void a() {            // friend function definition 
    int p;
    A x;
    p = x.a;          // friend function can access private member 'a'
    cout << "friend a() -> a = " << p << endl;
}

int main() {
    A x;
    x.b();   // calls member function
    a();     // calls friend function
    return 0;
}