#include <iostream>
using namespace std;

class IrrigationSystem {
public:
    virtual void calculateWater(double moisture) {
        cout << "Calculating water requirement\n";
    }
};

class DripIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        cout << "Drip water required: "
             << 2 * (100 - moisture) << " litres\n";
    }
};

class SprinklerIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        cout << "Sprinkler water required: "
             << 3 * (100 - moisture) << " litres\n";
    }
};

int main() {
    DripIrrigation d;
    SprinklerIrrigation s;

    d.calculateWater(40);
    s.calculateWater(40);

    return 0;
}