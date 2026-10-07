#include <iostream>
using namespace std;

class InternalExam {
public:
    void display() {
        cout << "Internal Exam Marks" << endl;
    }
};

class ExternalExam {
public:
    void display() {
        cout << "External Exam Marks" << endl;
    }
};

class FinalResult : public InternalExam, public ExternalExam {
public:
    void show() {
        InternalExam::display();
        ExternalExam::display();
    }
};

int main() {
    FinalResult f;
    f.show();
}