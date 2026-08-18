#include <iostream>
using namespace std;

class Mobile
{
private:
    string brand;
    string model;
    int battery;

public:
    void input()
    {
        cout << "Enter brand: ";
        cin >> brand;

        cout << "Enter model: ";
        cin >> model;

        cout << "Enter battery percentage: ";
        cin >> battery;
    }

    friend void checkBattery(Mobile m);
};

void checkBattery(Mobile m)
{
    cout << "\n--- Mobile Details ---\n";
    cout << "Brand: " << m.brand << endl;
    cout << "Model: " << m.model << endl;
    cout << "Battery: " << m.battery << "%" << endl;

    if (m.battery < 20)
        cout << "Battery Low" << endl;
    else
        cout << "Battery Normal" << endl;
}

int main()
{
    Mobile m;

    m.input();
    checkBattery(m);

    return 0;
}