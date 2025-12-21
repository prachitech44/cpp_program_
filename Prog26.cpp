// By Prachi
#include <iostream>
#include <string>
using namespace std;

class student {
    string name;
    int age;

public:

    // default constructor
    student() {
        cout << "Constructor called\n";
    }

    // parameterized constructor
    student(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // display function
    void display() {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
    }

    // overload new operator
    void* operator new(size_t size) {
        cout << "Custom new operator called. Size = " << size << endl;
        void* ptr = ::operator new(size);   // allocate memory
        return ptr;
    }

    // overload delete operator
    void operator delete(void* ptr) {
        cout << "Custom delete operator called\n";
        ::operator delete(ptr);  // free memory
    }
};

int main() {
    // dynamically creating object using overloaded new
    student* s = new student("Vidushi", 19);

    s->display();

    // deleting object using overloaded delete
    delete s;

    return 0;
}