#include <iostream>
using namespace std;

class Product
{
    int id;
    string name;
    float price;
    int quantity;

public:

    void accept()
    {
        cout << "Enter product ID: ";
        cin >> id;

        cout << "Enter product name: ";
        cin >> name;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter quantity: ";
        cin >> quantity;
    }

    void display()
    {
        cout << "\nID = " << id;
        cout << "\nName = " << name;
        cout << "\nPrice = " << price;
        cout << "\nQuantity = " << quantity << endl;
    }

    float cost()
    {
        return price * quantity;
    }
};

int main()
{
    int n;
    float total = 0;

    cout << "Enter number of products: ";
    cin >> n;

    Product *p = new Product[n];

    for(int i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        p[i].accept();
    }

    for(int i = 0; i < n; i++)
    {
        p[i].display();
        total = total + p[i].cost();
    }

    cout << "\nTotal Amount = " << total << endl;

    delete[] p;

    return 0;
}