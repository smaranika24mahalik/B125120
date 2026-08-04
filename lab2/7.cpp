#include <iostream>
using namespace std;

class Product
{
private:
    int productID;
    string productName;
    int quantity;
    float price;

public:
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price per Unit: ";
        cin >> price;
    }

    void sell()
    {
        int sold;

        cout << "Enter Quantity Sold: ";
        cin >> sold;

        if (sold <= quantity)
            quantity -= sold;
        else
            cout << "Insufficient Stock!" << endl;
    }

    void display()
    {
        cout << "\nProduct ID : " << productID << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Available Quantity : " << quantity << endl;
        cout << "Price : " << price << endl;
        cout << "Inventory Value : " << quantity * price << endl;
    }
};

int main()
{
    Product p;

    p.input();
    p.sell();
    p.display();

    return 0;
}