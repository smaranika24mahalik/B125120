#include <iostream>
using namespace std;

class Calculator
{
private:
    float a, b;

public:
    void input()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void add()
    {
        cout << "Addition = " << a + b << endl;
    }

    void subtract()
    {
        cout << "Subtraction = " << a - b << endl;
    }

    void multiply()
    {
        cout << "Multiplication = " << a * b << endl;
    }

    void divide()
    {
        if (b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division by zero is not possible." << endl;
    }
};

int main()
{
    Calculator c;

    c.input();

    cout << "\nResults\n";
    c.add();
    c.subtract();
    c.multiply();
    c.divide();

    return 0;
}