#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0, average;

    cout << "Enter number of elements: ";
    cin >> n;

    float *arr = new float[n];

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    average = sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    delete[] arr;

    return 0;
}