#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, breadth;
    float area, perimeter;

public:
    void input()
    {
        cout << "Enter Length: ";
        cin >> length;

        cout << "Enter Breadth: ";
        cin >> breadth;
    }

    void calculate()
    {
        area = length * breadth;
        perimeter = 2 * (length + breadth);
    }

    void display()
    {
        cout << "\nArea = " << area << endl;
        cout << "Perimeter = " << perimeter << endl;
    }
};

int main()
{
    Rectangle r;

    r.input();
    r.calculate();
    r.display();

    return 0;
}