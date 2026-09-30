#include <iostream>
using namespace std;

class Product {
    string name;
    float price;
    int quantity;

public:
    Product(string n = "", float p = 0, int q = 0) {
        name = n;
        price = p;
        quantity = q;
    }

    // Overload +
    Product operator+(Product p) {
        if (name == p.name && price == p.price) {
            return Product(name, price, quantity + p.quantity);
        }

        cout << "Products cannot be combined.\n";
        return Product();
    }

    // Overload >
    bool operator>(Product p) {
        return (price * quantity) > (p.price * p.quantity);
    }

    void display() {
        cout << "Product: " << name
             << "\nPrice: " << price
             << "\nQuantity: " << quantity << endl;
    }
};

int main() {
    Product p1("Pen", 10, 5);
    Product p2("Pen", 10, 3);

    // Addition
    Product p3 = p1 + p2;

    cout << "Combined Product:\n";
    p3.display();

    // Comparison
    if (p1 > p2)
        cout << "\nProduct 1 has greater total value.";
    else
        cout << "\nProduct 2 has greater or equal total value.";

    return 0;
}