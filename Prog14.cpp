// By Prachi
#include <iostream>
using namespace std;

class A {
public:
    static int count;        // static member shared by all objects

    A() {                    // constructor
        ++count;
        cout << "Constructing an A. count = " << count << endl;
    }

    ~A() {                   // destructor
        --count;
        cout << "Destructing an A. remaining count = " << count << endl;
    }
};

// define and initialize static member outside the class
int A::count = 0;

// a function that creates a temporary object (to show constructor+destructor)
void b() {
    A temp;
    cout << "Inside b(): temp object created, count = " << A::count << endl;
    // temp will be destroyed automatically when this function returns
}

int main() {
    cout << "Initial count = " << A::count << endl;

    A x1;
    cout << "After creating x1, count = " << A::count << endl;

    A x2;
    cout << "After creating x2, count = " << A::count << endl;

    b();   // creates and destroys a temp object inside b()

    cout << "After calling b(), count = " << A::count << endl;

    return 0;
}