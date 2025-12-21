// By Prachi
#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int i, j;

public:
    void set(int a, int b) {
        i = a;
        j = b;
    }

    void show() {
        cout << "i = " << i << endl;
        cout << "j = " << j << endl;
    }
};

// Derived1 class (inherits Base)
class Derived1 : public Base {
    int k;

public:
    void setd() {
        k = i * j;
    }

    void showd() {
        cout << "k (i * j) = " << k << endl;
    }
};

// Derived2 class (inherits Base)
class Derived2 : public Base {
    int m;

public:
    void sete() {
        m = i + j;
    }

    void showe() {
        cout << "m (i + j) = " << m << endl;
    }
};

int main() {
    Derived1 d1;
    Derived2 d2;

    d1.set(3, 4);   // for Derived1
    d1.setd();
    d1.show();  
    d1.showd();

    cout << endl;

    d2.set(5, 2);   // for Derived2
    d2.sete();
    d2.show();
    d2.showe();

    return 0;
}