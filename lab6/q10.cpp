#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of contacts: ";
    cin >> n;

    int *contacts = new int[n];

    cout << "Enter contact numbers:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> *(contacts + i);
    }

    int searchNumber;

    cout << "Enter contact number to search: ";
    cin >> searchNumber;

    int *ptr = contacts;
    int position = -1;

    for(int i = 0; i < n; i++)
    {
        if(*ptr == searchNumber)
        {
            position = i;
            break;
        }

        ptr++;
    }

    if(position != -1)
    {
        cout << "Contact Found at Position: " << position << endl;
    }
    else
    {
        cout << "Contact Not Found" << endl;
    }

    delete[] contacts;

    return 0;
}