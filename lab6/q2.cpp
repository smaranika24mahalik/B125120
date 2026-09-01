#include <iostream>
using namespace std;

int main()
{
    int level = 500;
    int *ptr = &level;

    cout << "Current Water Level: " << *ptr << " litres" << endl;

    *ptr = *ptr + 200;
    cout << "After Adding Water: " << *ptr << " litres" << endl;

    *ptr = *ptr - 100;
    cout << "After Removing Water: " << *ptr << " litres" << endl;

    cout << "Final Water Level: " << *ptr << " litres" << endl;

    return 0;
}