#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    float basicSalary;

public:
    Employee(string n, float s) {
        name = n;
        basicSalary = s;
    }
};

class Developer : public Employee {
protected:
    int experience;

public:
    Developer(string n, float s, int e) : Employee(n, s) {
        experience = e;
    }
};

class SeniorDeveloper : public Developer {
    float projectBonus;

public:
    SeniorDeveloper(string n, float s, int e, float p)
        : Developer(n, s, e) {
        projectBonus = p;
    }

    void display() {
        float expBonus = 0.05 * basicSalary * experience;
        float finalSalary = basicSalary + expBonus + projectBonus;

        cout << "Name: " << name << endl;
        cout << "Final Salary: " << finalSalary << endl;
    }
};

int main() {
    SeniorDeveloper s("Rahul", 50000, 3, 10000);
    s.display();
}