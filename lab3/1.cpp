#include <iostream>
using namespace std;

int main()
{
    int *p;

    p = new int;

    cout << "Enter an integer: ";
    cin >> *p;

    cout << "Value = " << *p << endl;

    delete p;

    return 0;
}