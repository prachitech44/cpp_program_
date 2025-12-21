// By Prachi
#include <iostream>
using namespace std;

class C {
public:
    int val;

    C(int i) : val(i) {}     // constructor

    int add() {              // member function
        return val + val;
    }
};

int main() {
    // Pointer to data member of class C
    int C::* data;

    // Pointer to member function of class C
    int (C::* func)();

    C obj1(1), obj2(2);

    // Object pointers
    C *p1, *p2;
    p1 = &obj1;
    p2 = &obj2;

    // Assign data member pointer
    data = &C::val;

    // Assign member function pointer
    func = &C::add;

    cout << "Value = ";
    cout << p1->*data << "  " << p2->*data << endl;

    cout << "Double = ";
    cout << (p1->*func)() << "  " << (p2->*func)() << endl;

    return 0;
}