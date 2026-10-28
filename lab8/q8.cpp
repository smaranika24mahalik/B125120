#include <iostream>
using namespace std;

class CloudResource {
public:
    virtual void calculateCost(double cpuHours) {
        cout << "Calculating cloud cost\n";
    }
};

class StandardInstance : public CloudResource {
public:
    void calculateCost(double cpuHours) override {
        double cost = cpuHours * 5;

        if (cpuHours > 100)
            cost *= 0.85;

        cout << "Standard cost: Rs. " << cost << endl;
    }
};

class PremiumInstance : public CloudResource {
public:
    void calculateCost(double cpuHours) override {
        double cost = cpuHours * 12;

        if (cpuHours > 100)
            cost *= 0.85;

        cout << "Premium cost: Rs. " << cost << endl;
    }
};

int main() {
    StandardInstance s;
    PremiumInstance p;

    s.calculateCost(120);
    p.calculateCost(120);

    return 0;
}