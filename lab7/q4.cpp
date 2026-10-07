#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accountNo;
    float balance;

public:
    BankAccount(int a, float b) {
        accountNo = a;
        balance = b;
    }
};

class SavingsAccount : public BankAccount {
    float interest;

public:
    SavingsAccount(int a, float b, float i)
        : BankAccount(a, b) {
        interest = i;
    }

    void display() {
        balance += balance * interest / 100;
        cout << "Savings Balance: " << balance << endl;
    }
};

class CurrentAccount : public BankAccount {
    float minBalance, charge;

public:
    CurrentAccount(int a, float b, float m, float c)
        : BankAccount(a, b) {
        minBalance = m;
        charge = c;
    }

    void display() {
        if (balance < minBalance)
            balance -= charge;

        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    SavingsAccount s(101, 10000, 5);
    CurrentAccount c(102, 4000, 5000, 200);

    s.display();
    c.display();
}