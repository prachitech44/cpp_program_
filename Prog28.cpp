// By Prachi
#include <iostream>
using namespace std;

class Base {
    int i, j;      // private members

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

// derived inherits Base privately
class derived : private Base {
    int k;

public:
    derived(int x) {
        k = x;
    }

    void showd() {
        show();         // calling Base class show()
        set(1, 2);      // calling Base class set()
        cout << "k = " << k << endl;
    }
};

int main() {
    derived d(10);
    d.showd();

    return 0;
}