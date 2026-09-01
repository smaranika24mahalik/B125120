#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a sentence: ";
    cin.getline(str, 100);

    char *ptr = str;

    int digits = 0;
    int alphabets = 0;
    int spaces = 0;

    while(*ptr != '\0')
    {
        if(isdigit(*ptr))
            digits++;

        else if(isalpha(*ptr))
            alphabets++;

        else if(*ptr == ' ')
            spaces++;

        ptr++;
    }

    cout << "Digits: " << digits << endl;
    cout << "Alphabets: " << alphabets << endl;
    cout << "Spaces: " << spaces << endl;

    return 0;
}