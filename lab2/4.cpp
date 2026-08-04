#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    string name;
    float balance;

public:
    void input()
    {
        cout << "Enter Account Number: ";
        cin >> accountNo;

        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;

        cout << "Enter Deposit Amount: ";
        cin >> amount;

        balance += amount;
    }

    void withdraw()
    {
        float amount;

        cout << "Enter Withdrawal Amount: ";
        cin >> amount;

        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance!" << endl;
    }

    void display()
    {
        cout << "\n----- Account Details -----\n";
        cout << "Account Number : " << accountNo << endl;
        cout << "Holder Name    : " << name << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.input();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}