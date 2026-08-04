#include <iostream>
using namespace std;

class Employee
{
private:
    int empID;
    string empName;
    float basicSalary;
    float hra, da, grossSalary;

public:
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> empID;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, empName);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculate()
    {
        hra = 0.20 * basicSalary;
        da = 0.10 * basicSalary;
        grossSalary = basicSalary + hra + da;
    }

    void display()
    {
        cout << "\n----- Salary Details -----\n";
        cout << "Employee ID   : " << empID << endl;
        cout << "Employee Name : " << empName << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "HRA           : " << hra << endl;
        cout << "DA            : " << da << endl;
        cout << "Gross Salary  : " << grossSalary << endl;
    }
};

int main()
{
    Employee e;

    e.input();
    e.calculate();
    e.display();

    return 0;
}