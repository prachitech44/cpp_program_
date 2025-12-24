#include <iostream>
using namespace std;

class Area {
public:
    int calculate(int a) {
        return a * a;          // square
    }

    int calculate(int l, int b) {
        return l * b;          // rectangle
    }
};

int main() {
    Area a;
    cout << "Square Area: " << a.calculate(5) << endl;
    cout << "Rectangle Area: " << a.calculate(4, 6) << endl;
    return 0;
}