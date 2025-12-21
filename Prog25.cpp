// By Prachii
#include <iostream>
using namespace std;

class A {
    int a, b;

public:
    A() : a(0), b(0) {}
    A(int x, int y) : a(x), b(y) {}

    void show() const {
        cout << a << " " << b << endl;
    }

    // friend declarations for non-member operators
    friend A operator+(const A &obj1, const A &obj2);
    friend A operator++(A &obj);   // prefix ++ (increments and returns a copy)
};

// non-member addition
A operator+(const A &obj1, const A &obj2) {
    A temp;
    temp.a = obj1.a + obj2.a;
    temp.b = obj1.b + obj2.b;
    return temp;
}

// non-member prefix ++
A operator++(A &obj) {
    ++obj.a;
    ++obj.b;
    return obj; // return updated object by value
}

int main() {
    A obj1(10, 20), obj2(5, 30);

    obj1 = obj1 + obj2;   // uses friend operator+
    obj1.show();          // prints: 15 50

    ++obj1;               // uses friend operator++
    obj1.show();          // prints: 16 51

    return 0;
}