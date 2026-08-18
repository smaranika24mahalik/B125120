#include <iostream>
using namespace std;

class SecuritySystem;

class Door
{
private:
    int doorNumber;
    bool lockStatus;

public:
    void input()
    {
        cout << "Enter door number: ";
        cin >> doorNumber;

        cout << "Is door locked? (1 = Yes, 0 = No): ";
        cin >> lockStatus;
    }

    friend class SecuritySystem;
};

class SecuritySystem
{
public:
    void checkLock(Door d)
    {
        cout << "\nDoor Number: " << d.doorNumber << endl;

        if (d.lockStatus)
            cout << "Status: Locked" << endl;
        else
            cout << "Status: Unlocked" << endl;
    }
};

int main()
{
    Door d;
    SecuritySystem s;

    d.input();
    s.checkLock(d);

    return 0;
}