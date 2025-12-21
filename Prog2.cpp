// By Prachi
#include <iostream>
using namespace std;

class student {
    char name[50];
    int rollno;
    float percent;

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollno;

        cout << "Enter percent: ";
        cin >> percent;
    }

    void output() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Percentage: " << percent << endl;
    }
};

int main() {
    student x;
    x.input();
    x.output();
    return 0;
}