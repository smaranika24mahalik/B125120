#include <iostream>
using namespace std;

class ParkingSlot
{
private:
    int slotNumber;
    string vehicleNumber;
    bool occupied;

public:
    void input()
    {
        cout << "Enter slot number: ";
        cin >> slotNumber;

        cout << "Enter vehicle number: ";
        cin >> vehicleNumber;

        cout << "Is slot occupied? (1 = Yes, 0 = No): ";
        cin >> occupied;
    }

    friend void checkSlot(ParkingSlot p);
};

void checkSlot(ParkingSlot p)
{
    cout << "\nSlot Number: " << p.slotNumber << endl;

    if (p.occupied)
    {
        cout << "Status: Occupied" << endl;
        cout << "Vehicle Number: " << p.vehicleNumber << endl;
    }
    else
    {
        cout << "Status: Available" << endl;
    }
}

int main()
{
    ParkingSlot p;

    p.input();
    checkSlot(p);

    return 0;
}