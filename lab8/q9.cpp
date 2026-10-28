#include <iostream>
using namespace std;

class Robot {
public:
    virtual void move(double distance) {
        cout << "Robot is moving\n";
    }
};

class WheeledRobot : public Robot {
public:
    void move(double distance) override {
        cout << "Wheeled robot travel time: "
             << distance / 2 << " seconds\n";
    }
};

class TrackedRobot : public Robot {
public:
    void move(double distance) override {
        cout << "Tracked robot travel time: "
             << distance / 1.2 << " seconds\n";
    }
};

int main() {
    WheeledRobot w;
    TrackedRobot t;

    Robot* ptr;

    ptr = &w;
    ptr->move(12);

    ptr = &t;
    ptr->move(12);

    return 0;
}