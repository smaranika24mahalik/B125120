#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;

public:

    void accept()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nID = " << id;
        cout << "\nName = " << name;
        cout << "\nSalary = " << salary << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee *e = new Employee[n];

    for(int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        e[i].accept();
    }

    cout << "\n--- Employee Details ---\n";

    for(int i = 0; i < n; i++)
    {
        e[i].display();
    }

    delete[] e;

    return 0;
}