#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string n) {
        name = n;
        cout << "Person constructor" << endl;
    }
};

class Employee : public Person {
protected:
    int id;

public:
    Employee(string n, int i) : Person(n) {
        id = i;
        cout << "Employee constructor" << endl;
    }
};

class Manager : public Employee {
    float salary;

public:
    Manager(string n, int i, float s)
        : Employee(n, i) {
        salary = s;
        cout << "Manager constructor" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Manager m("Aman", 101, 50000);
    m.display();
}