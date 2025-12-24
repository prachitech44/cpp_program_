#include <iostream>
using namespace std;

// First Parent class
class Parent1 {
public:
    Parent1() {
        cout << "Parent1 constructor called" << endl;
    }
};

// Second Parent class
class Parent2 {
public:
    Parent2() {
        cout << "Parent2 constructor called" << endl;
    }
};

// Child class (Multiple Inheritance)
class Child : public Parent1, public Parent2 {
public:
    Child() {
        cout << "Child constructor called" << endl;
    }
};

int main() {
    Child obj;
    return 0;
}
