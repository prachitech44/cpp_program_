#include <iostream>
using namespace std;

// Base class
class Parent {
public:
    void showParent() {
        cout << "This is Parent class" << endl;
    }
};

// Derived class
class Child : public Parent {
public:
    void showChild() {
        cout << "This is Child class" << endl;
    }
};

int main() {
    Child obj;
    obj.showParent();  // Parent class function
    obj.showChild();   // Child class function
    return 0;
}
