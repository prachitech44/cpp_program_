#include <iostream>
using namespace std;

// Inline function
inline int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 5, y = 10;
    int sum = add(x, y);

    cout << "Sum = " << sum;

    return 0;
}