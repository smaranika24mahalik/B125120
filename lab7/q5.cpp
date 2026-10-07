#include <iostream>
using namespace std;

class Academic {
protected:
    int m1, m2, m3;

public:
    Academic(int a, int b, int c) {
        m1 = a;
        m2 = b;
        m3 = c;
    }
};

class Sports {
protected:
    int sportsMarks;

public:
    Sports(int s) {
        sportsMarks = s;
    }
};

class StudentResult : public Academic, public Sports {
public:
    StudentResult(int a, int b, int c, int s)
        : Academic(a, b, c), Sports(s) {}

    void display() {
        int total = m1 + m2 + m3 + sportsMarks;
        float average = total / 4.0;

        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
    }
};

int main() {
    StudentResult s(80, 75, 90, 85);
    s.display();
}