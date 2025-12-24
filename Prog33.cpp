#include <iostream>
using namespace std;

class student
{
    int rollno;
    char name[50];
    float percent;

public:
    void input();
    void output();
};

void student::input()
{
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter roll number: ";
    cin >> rollno;

    cout << "Enter percentage: ";
    cin >> percent;
}

void student::output()
{
    cout << "\nStudent Details" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollno << endl;
    cout << "Percentage: " << percent << endl;
}

int main()
{
    student z;
    z.input();
    z.output();

    return 0;
}