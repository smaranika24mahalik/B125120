#include <iostream>
using namespace std;

class Diary
{
private:
    string ownerName;
    int numberOfEntries;
    string lastEntry;

public:
    void input()
    {
        cout << "Enter owner name: ";
        cin >> ownerName;

        cout << "Enter number of entries: ";
        cin >> numberOfEntries;

        cout << "Enter last entry: ";
        cin >> lastEntry;
    }

    friend void displayDiary(Diary d);
};

void displayDiary(Diary d)
{
    cout << "\n--- Diary Details ---\n";
    cout << "Owner Name: " << d.ownerName << endl;
    cout << "Number of Entries: " << d.numberOfEntries << endl;
    cout << "Last Entry: " << d.lastEntry << endl;
}

int main()
{
    Diary d;

    d.input();
    displayDiary(d);

    return 0;
}