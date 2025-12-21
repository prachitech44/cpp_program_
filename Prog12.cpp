// By Prachi
#include <iostream>
using namespace std;

int i = 100;   // global variable

void a() {
    int i = 10;   // local variable in function a()
    cout << "Local i inside function a() = " << i << endl;
}

int main() {
    cout << "Global i = " << i << endl;

    a();  // call function a()

    int i = 50;   // local variable in main
    cout << "Local i inside main() = " << i << endl;

    return 0;
}