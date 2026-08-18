#include <iostream>
using namespace std;

class HomeController;

class SmartDevice
{
private:
    string deviceName;
    string deviceType;
    bool powerStatus;

public:
    void input()
    {
        cout << "Enter device name: ";
        cin >> deviceName;

        cout << "Enter device type: ";
        cin >> deviceType;

        powerStatus = false;
    }

    friend class HomeController;
};

class HomeController
{
public:
    void displayInfo(SmartDevice d)
    {
        cout << "\n--- Device Information ---\n";
        cout << "Device Name: " << d.deviceName << endl;
        cout << "Device Type: " << d.deviceType << endl;
    }

    void turnOn(SmartDevice &d)
    {
        d.powerStatus = true;
        cout << "Device turned ON." << endl;
    }

    void turnOff(SmartDevice &d)
    {
        d.powerStatus = false;
        cout << "Device turned OFF." << endl;
    }

    void displayStatus(SmartDevice d)
    {
        if (d.powerStatus)
            cout << "Power Status: ON" << endl;
        else
            cout << "Power Status: OFF" << endl;
    }
};

int main()
{
    SmartDevice d;
    HomeController h;

    d.input();

    h.displayInfo(d);

    h.displayStatus(d);

    h.turnOn(d);
    h.displayStatus(d);

    h.turnOff(d);
    h.displayStatus(d);

    return 0;
}