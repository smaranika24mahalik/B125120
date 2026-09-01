#include <iostream>
using namespace std;

void addMarks(int *ptr, int n)
{
    for(int i = 0; i < n; i++)
    {
        *(ptr + i) = *(ptr + i) + 5;
    }
}

int main()
{
    int marks[5] = {50, 60, 70, 80, 90};

    cout << "Before Update: ";

    for(int i = 0; i < 5; i++)
    {
        cout << *(marks + i) << " ";
    }

    addMarks(marks, 5);

    cout << "\nAfter Update: ";

    for(int i = 0; i < 5; i++)
    {
        cout << *(marks + i) << " ";
    }

    return 0;
}