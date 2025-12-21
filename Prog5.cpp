// By Prachi
#include <iostream>
using namespace std;

class A {
public:
    inline void a() {     // inline function
        int x, y, c;
        cout << "Enter two numbers: ";
        cin >> x >> y;
        c = x * y;
        cout << "Multiplication = " << c << endl;
    }
};

int main() {
    A obj;
    obj.a();    // calling inline function
    return 0;
}