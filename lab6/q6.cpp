#include <iostream>
using namespace std;

void findLongest(int *ptr, int n)
{
    int longest = *ptr;

    for(int i = 1; i < n; i++)
    {
        ptr++;

        if(*ptr > longest)
        {
            longest = *ptr;
        }
    }

    cout << "Longest Episode: " << longest << " minutes";
}

int main()
{
    int duration[6] = {30, 45, 25, 60, 40, 50};

    findLongest(duration, 6);

    return 0;
}