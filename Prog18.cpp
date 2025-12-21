// By Prachi
#include <iostream>
using namespace std;

class A {
    int i;

public:
    void set(int num) {
        i = num;
    }

    void get() {
        cout << i;
    }
};

int main() {
    A obj;     // create object
    A* p;      // pointer to object

    p = &obj;  // assign address of object to pointer

    p->set(10);   // using pointer to call member function

    cout << "Value of i = ";
    p->get();     // using pointer to call get()

    return 0;
}