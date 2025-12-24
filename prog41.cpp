#include <iostream>
using namespace std;

class Employee {
public:
    void show() {
        cout << "Employee Name: Prachi" << endl;
    }
};

class Salary : public Employee {
public:
    void displaySalary() {
        cout << "Salary: 35000" << endl;
    }
};

int main() {
    Salary s;
    s.show();
    s.displaySalary();
    return 0;
}