#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator-(Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i";
    }
};

int main() {
    Complex c1(8, 5);
    Complex c2(3, 2);

    Complex c3 = c1 - c2;

    cout << "Result: ";
    c3.display();

    return 0;
}