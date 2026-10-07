#include <iostream>
using namespace std;

class Vehicle {
protected:
    string regNo;
    int days;

public:
    Vehicle(string r, int d) {
        regNo = r;
        days = d;
    }
};

class Car : public Vehicle {
protected:
    float dailyRate;

public:
    Car(string r, int d, float rate)
        : Vehicle(r, d) {
        dailyRate = rate;
    }
};

class LuxuryCar : public Car {
    float luxuryCharge;

public:
    LuxuryCar(string r, int d, float rate, float charge)
        : Car(r, d, rate) {
        luxuryCharge = charge;
    }

    void display() {
        float total = (dailyRate + luxuryCharge) * days;

        cout << "Registration No: " << regNo << endl;
        cout << "Total Rental Cost: " << total << endl;
    }
};

int main() {
    LuxuryCar c("OD02AB1234", 5, 2000, 500);
    c.display();
}