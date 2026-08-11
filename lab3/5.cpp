#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;
    float marks;

public:

    void accept()
    {
        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nRoll Number = " << roll;
        cout << "\nName = " << name;
        cout << "\nMarks = " << marks;
    }
};

int main()
{
    Student *s = new Student;

    s->accept();
    s->display();

    delete s;

    return 0;
}