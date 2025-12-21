// By Prachi
#include <iostream>
using namespace std;

class student {
    char name[50];
    int rollno;
    float percent;

public:
    void input();
    void display();
};

void student::input() {
    cout << "Enter name, rollno and percent of a student: ";
    cin >> name >> rollno >> percent;
}

void student::display() {
    cout << "Name: " << name 
         << "  Rollno: " << rollno 
         << "  Percent: " << percent << endl;
}

int main() {
    student s[5];

    for(int i = 0; i < 5; i++) {
        s[i].input();
    }

    cout << "\n--- Student Details ---\n";
    for(int i = 0; i < 5; i++) {
        s[i].display();
    }

    return 0;
}