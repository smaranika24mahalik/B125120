#include <iostream>
using namespace std;

int main()
{
    int equipment[6] = {101, 102, 103, 104, 105, 106};

    int *ptr = equipment;

    for(int i = 0; i < 6; i++)
    {
        cout << "Equipment ID: " << *(ptr + i);
        cout << "  Address: " << (ptr + i) << endl;
    }

    return 0;
}