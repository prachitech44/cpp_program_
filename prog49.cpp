#include <iostream>
using namespace std;

// First Parent class
class Parent1 {
public:
    Parent1() {
        cout << "Parent1 constructor called" << endl;
    }
    ~Parent1() {
        cout << "Parent1 destructor called" << endl;
    }
};

// Second Parent class
class Parent2 {
public:
    Parent2() {
        cout << "Parent2 constructor called" << endl;
    }
    ~Parent2() {
        cout << "Parent2 destructor called" << endl;
    }
};

// Child class
class Child : public Parent1, public Parent2 {
public:
    Child() {
        cout << "Child constructor called" << endl;
    }
    ~Child() {
        cout << "Child destructor called" << endl;
    }
};

int main() {
    Child obj;
    return 0;
}
