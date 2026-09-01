#include <iostream>
using namespace std;

int main()
{
    int seats[8] = {101, 102, 103, 104, 105, 106, 107, 108};

    int *ptr = seats;

    cout << "Before Correction: ";

    for(int i = 0; i < 8; i++)
    {
        cout << *(ptr + i) << " ";
    }

    int position, newSeat;

    cout << "\nEnter position to correct (0-7): ";
    cin >> position;

    cout << "Enter correct seat number: ";
    cin >> newSeat;

    *(ptr + position) = newSeat;

    cout << "After Correction: ";

    for(int i = 0; i < 8; i++)
    {
        cout << *(ptr + i) << " ";
    }

    return 0;
}