#include <iostream>
using namespace std;

class Compressor {
public:
    virtual void compress(double fileSize) {
        cout << "Compressing file\n";
    }
};

class TextCompressor : public Compressor {
public:
    void compress(double fileSize) override {
        cout << "Original text file size: " << fileSize << " MB\n";
        cout << "Compressed size: " << fileSize * 0.40 << " MB\n";
    }
};

class ImageCompressor : public Compressor {
public:
    void compress(double fileSize) override {
        cout << "Original image file size: " << fileSize << " MB\n";
        cout << "Compressed size: " << fileSize * 0.70 << " MB\n";
    }
};

int main() {
    TextCompressor t;
    ImageCompressor i;

    t.compress(100);
    i.compress(100);

    return 0;
}