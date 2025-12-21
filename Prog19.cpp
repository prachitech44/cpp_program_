// By Prachi
#include <iostream>
using namespace std;

class A {
public:
    int val;

    A(int i) : val(i) {}            // constructor initializes val

    int add() const {               // member function (const because it doesn't modify)
        return val + val;
    }
};

int main() {
    // pointer to data member of A
    int A::* dataPtr = nullptr;

    // pointer to member function of A (const member function)
    int (A::* funcPtr)() const = nullptr;

    A obj1(1), obj2(2);

    // assign pointers
    dataPtr = &A::val;
    funcPtr = &A::add;

    // access data member through pointer-to-member
    cout << "value: ";
    cout << obj1.*dataPtr << "  " << obj2.*dataPtr << endl;

    // call member function through pointer-to-member-function
    cout << "double: ";
    cout << (obj1.*funcPtr)() << "  " << (obj2.*funcPtr)() << endl;

    return 0;
}