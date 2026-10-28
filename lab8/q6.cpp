#include <iostream>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) {
        cout << "Scanning for threats\n";
    }
};

class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "Threats detected: " << threats << endl;
    }
};

class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "Threats detected: " << threats << endl;
        cout << "Threats remaining after removal: "
             << threats * 0.10 << endl;
    }
};

int main() {
    BasicScanner b;
    AdvancedScanner a;

    b.scan(100);
    a.scan(100);

    return 0;
}