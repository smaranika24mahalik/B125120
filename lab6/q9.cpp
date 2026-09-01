#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of tables: ";
    cin >> n;

    int *tables = new int[n];

    cout << "Enter table numbers:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> *(tables + i);
    }

    int smallest = *tables;

    int *ptr = tables + 1;

    for(int i = 1; i < n; i++)
    {
        if(*ptr < smallest)
        {
            smallest = *ptr;
        }

        ptr++;
    }

    cout << "Smallest Table Number: " << smallest << endl;

    delete[] tables;

    return 0;
}