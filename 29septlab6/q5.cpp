#include <iostream>
using namespace std;

class Time {
    int hours, minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    Time operator+(Time t) {
        Time result;

        result.hours = hours + t.hours;
        result.minutes = minutes + t.minutes;

        if (result.minutes >= 60) {
            result.hours += result.minutes / 60;
            result.minutes = result.minutes % 60;
        }

        return result;
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes";
    }
};

int main() {
    Time t1(4, 45);
    Time t2(2, 30);

    Time t3 = t1 + t2;

    cout << "Result: ";
    t3.display();

    return 0;
}