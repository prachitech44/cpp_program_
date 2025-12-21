// By Prachi
#include <iostream>
using namespace std;

class A {
public:
    A() {                       // default constructor
        cout << "Constructor called";
    }
};

int main() {
    A a;    // object created → constructor runs automatically
    return 0;
}