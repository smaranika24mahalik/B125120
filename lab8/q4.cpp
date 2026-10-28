#include <iostream>
using namespace std;

class Delivery {
public:
    virtual void estimateTime(double distance) {
        cout << "Estimating delivery time\n";
    }
};

class BikeDelivery : public Delivery {
public:
    void estimateTime(double distance) override {
        double time = (distance / 20) * 60 + 5;
        cout << "Bike delivery time: " << time << " minutes\n";
    }
};

class DroneDelivery : public Delivery {
public:
    void estimateTime(double distance) override {
        double time = (distance / 40) * 60 + 2;
        cout << "Drone delivery time: " << time << " minutes\n";
    }
};

int main() {
    BikeDelivery b;
    DroneDelivery d;

    b.estimateTime(10);
    d.estimateTime(10);

    return 0;
}