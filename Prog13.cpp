//By Prachi
#include <iostream>
using namespace std;

int i = 20;   // global variable

void a() {
    int i = 10;     // local variable inside function a()
    cout << "Local i inside a() = " << i << endl;
    cout << "Global i using scope resolution ::i = " << ::i << endl;
}

int main() {
    int i = 5;      // local variable inside main()
    cout << "Local i inside main() = " << i << endl;

    a();            // call function a()

    return 0;
}