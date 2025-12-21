// By Prachi
#include <iostream>
using namespace std;

class A {
    int a;

public:
    void setValue(int a) {
        this->a = a;   // using this pointer
    }

    int getValue() {
        return a;
    }
};

int main() {
    A obj;
    obj.setValue(10);
    cout << "value = " << obj.getValue();
    return 0;
}