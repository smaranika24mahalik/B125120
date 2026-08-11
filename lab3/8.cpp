#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;
    int subjects;
    float *marks;

public:

    void accept()
    {
        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter number of subjects: ";
        cin >> subjects;

        marks = new float[subjects];

        cout << "Enter marks:\n";

        for(int i = 0; i < subjects; i++)
        {
            cin >> marks[i];
        }
    }

    void display()
    {
        float total = 0;

        for(int i = 0; i < subjects; i++)
        {
            total = total + marks[i];
        }

        float average = total / subjects;

        cout << "\n--- Student Result ---\n";
        cout << "Roll Number = " << roll << endl;
        cout << "Name = " << name << endl;
        cout << "Total Marks = " << total << endl;
        cout << "Average = " << average << endl;
    }

    ~Student()
    {
        delete[] marks;
    }
};

int main()
{
    Student s;

    s.accept();
    s.display();

    return 0;
}