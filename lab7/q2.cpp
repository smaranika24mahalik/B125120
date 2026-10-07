#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;

public:
    Student(string n, int r) {
        name = n;
        rollNo = r;
    }

    virtual void calculateResult() {
        cout << "Student Result" << endl;
    }
};

class RegularStudent : public Student {
    int marks;

public:
    RegularStudent(string n, int r, int m)
        : Student(n, r) {
        marks = m;
    }

    void calculateResult() override {
        cout << "Regular Student: " << name << endl;
        cout << "Total Marks: " << marks << endl;
    }
};

class ScholarshipStudent : public Student {
    int marks;

public:
    ScholarshipStudent(string n, int r, int m)
        : Student(n, r) {
        marks = m;
    }

    void calculateResult() override {
        cout << "Scholarship Student: " << name << endl;
        cout << "Total Marks: " << marks + 5 << endl;
    }
};

int main() {
    RegularStudent r("Aman", 101, 450);
    ScholarshipStudent s("Riya", 102, 450);

    r.calculateResult();
    s.calculateResult();
}