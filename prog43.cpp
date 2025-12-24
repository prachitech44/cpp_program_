#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    BankAccount() {
        balance = 5000;
    }

    void deposit(int amt) {
        balance = balance + amt;
    }

    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.deposit(2000);
    acc.showBalance();
    return 0;
}