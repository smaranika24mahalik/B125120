#include <iostream>
using namespace std;

class FoodOrder
{
private:
    int orderID;
    string foodItem;
    int quantity;
    float price;

public:
    void input()
    {
        cout << "Enter order ID: ";
        cin >> orderID;

        cout << "Enter food item: ";
        cin >> foodItem;

        cout << "Enter quantity: ";
        cin >> quantity;

        cout << "Enter price: ";
        cin >> price;
    }

    friend void calculateBill(FoodOrder f);
};

void calculateBill(FoodOrder f)
{
    float total = f.quantity * f.price;

    cout << "\n--- Order Details ---\n";
    cout << "Order ID: " << f.orderID << endl;
    cout << "Food Item: " << f.foodItem << endl;
    cout << "Quantity: " << f.quantity << endl;
    cout << "Price: " << f.price << endl;
    cout << "Total Bill: " << total << endl;
}

int main()
{
    FoodOrder f;

    f.input();
    calculateBill(f);

    return 0;
}