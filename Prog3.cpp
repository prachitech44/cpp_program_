// By Prachi
#include <iostream>
using namespace std;

class student {
    int rollno;
    char name[50];
    float percent;

public:
    void input();
    void output();
};

void student::input() {
    cout << "Enter your name, rollno & percent:\n";
    cin >> name >> rollno >> percent;
}

void student::output() {
    cout << "\nYour name, rollno & percent are:\n";
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollno << endl;
    cout << "Percent: " << percent << endl;
}

int main() {
    student z;
    z.input();
    z.output();
    return 0;
}