#include <iostream>
using namespace std;

class Counter {
    int value;

public:
    Counter(int v = 0) {
        value = v;
    }

    // Prefix ++
    Counter operator++() {
        ++value;
        return *this;
    }

    // Postfix ++
    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    void display() {
        cout << value;
    }
};

int main() {
    Counter c(5);

    cout << "Initial value: ";
    c.display();

    ++c;
    cout << "\nAfter prefix ++: ";
    c.display();

    c++;
    cout << "\nAfter postfix ++: ";
    c.display();

    return 0;
}