#include <iostream>
using namespace std;

class TicketChecker;

class TrainSeat
{
private:
    int seatNumber;
    string passengerName;
    bool booked;

public:
    void input()
    {
        cout << "Enter seat number: ";
        cin >> seatNumber;

        cout << "Enter passenger name: ";
        cin >> passengerName;

        cout << "Is seat booked? (1 = Yes, 0 = No): ";
        cin >> booked;
    }

    friend class TicketChecker;
};

class TicketChecker
{
public:
    void checkSeat(TrainSeat t)
    {
        cout << "\n--- Seat Details ---\n";
        cout << "Seat Number: " << t.seatNumber << endl;

        if (t.booked)
        {
            cout << "Status: Booked" << endl;
            cout << "Passenger: " << t.passengerName << endl;
        }
        else
        {
            cout << "Status: Available" << endl;
        }
    }
};

int main()
{
    TrainSeat t;
    TicketChecker checker;

    t.input();
    checker.checkSeat(t);

    return 0;
}