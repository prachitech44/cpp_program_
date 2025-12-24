#include <iostream>
using namespace std;

class PrivateExample {
private:
    int secretNumber;

public:
    void setNumber(int n) {
        secretNumber = n;
    }

    // Friend function declaration
    friend void showSecret(PrivateExample obj);
};

// Friend function definition
void showSecret(PrivateExample obj) {
    cout << "Private member (secretNumber): "
         << obj.secretNumber << endl;
}

int main() {
    PrivateExample p;
    p.setNumber(66);

    showSecret(p);

    return 0;
}