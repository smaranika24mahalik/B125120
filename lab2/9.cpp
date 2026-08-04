#include <iostream>
using namespace std;

class StudentResult
{
private:
    string name;
    int roll;
    int marks[5];
    int total;
    float percentage;
    char grade;

public:
    void input()
    {
        cout << "Enter Student Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Marks of 5 Subjects:\n";
        for (int i = 0; i < 5; i++)
            cin >> marks[i];
    }

    void calculate()
    {
        total = 0;

        for (int i = 0; i < 5; i++)
            total += marks[i];

        percentage = total / 5.0;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    void display()
    {
        cout << "\nName : " << name << endl;
        cout << "Roll No : " << roll << endl;
        cout << "Total Marks : " << total << endl;
        cout << "Percentage : " << percentage << "%" << endl;
        cout << "Grade : " << grade << endl;
    }
};

int main()
{
    StudentResult s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}