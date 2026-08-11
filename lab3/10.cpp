#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float basicSalary;
    float *earnings;
    int months;

public:

    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter number of months: ";
        cin >> months;

        earnings = new float[months];

        cout << "Enter monthly earnings:\n";

        for(int i = 0; i < months; i++)
        {
            cin >> earnings[i];
        }
    }

    void display()
    {
        float total = 0;
        int highestMonth = 0;

        for(int i = 0; i < months; i++)
        {
            total = total + earnings[i];

            if(earnings[i] > earnings[highestMonth])
            {
                highestMonth = i;
            }
        }

        float average = total / months;

        cout << "\n--- Employee Analysis ---\n";
        cout << "Employee ID = " << id << endl;
        cout << "Name = " << name << endl;
        cout << "Basic Salary = " << basicSalary << endl;
        cout << "Total Earnings = " << total << endl;
        cout << "Average Monthly Earning = " << average << endl;
        cout << "Highest Earning = " << earnings[highestMonth] << endl;
        cout << "Highest Earning Month = "
             << highestMonth + 1 << endl;
    }

    ~Employee()
    {
        delete[] earnings;
    }
};

int main()
{
    Employee e;

    e.accept();
    e.display();

    return 0;
}