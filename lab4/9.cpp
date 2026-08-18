#include <iostream>
using namespace std;

class Result;

class Exam
{
private:
    string studentName;
    string subject;
    float marks;
    float maxMarks;

public:
    void input()
    {
        cout << "Enter student name: ";
        cin >> studentName;

        cout << "Enter subject: ";
        cin >> subject;

        cout << "Enter marks: ";
        cin >> marks;

        cout << "Enter maximum marks: ";
        cin >> maxMarks;
    }

    friend class Result;
};

class Result
{
public:
    void displayResult(Exam e)
    {
        float percentage = (e.marks / e.maxMarks) * 100;

        cout << "\n--- Exam Result ---\n";
        cout << "Student Name: " << e.studentName << endl;
        cout << "Subject: " << e.subject << endl;
        cout << "Marks: " << e.marks << endl;
        cout << "Maximum Marks: " << e.maxMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main()
{
    Exam e;
    Result r;

    e.input();
    r.displayResult(e);

    return 0;
}