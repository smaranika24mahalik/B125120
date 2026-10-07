#include <iostream>
using namespace std;

class Employee {
protected:
    int id;
    string name;

public:
    Employee(int i, string n) {
        id = i;
        name = n;
    }
};

class Developer : virtual public Employee {
protected:
    string language;

public:
    Developer(int i, string n, string l)
        : Employee(i, n) {
        language = l;
    }
};

class Tester : virtual public Employee {
protected:
    string tool;

public:
    Tester(int i, string n, string t)
        : Employee(i, n) {
        tool = t;
    }
};

class TechLead : public Developer, public Tester {
public:
    TechLead(int i, string n, string l, string t)
        : Employee(i, n),
          Developer(i, n, l),
          Tester(i, n, t) {}

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Programming Language: " << language << endl;
        cout << "Testing Tool: " << tool << endl;
    }
};

int main() {
    TechLead t(101, "Riya", "C++", "Selenium");
    t.display();
}