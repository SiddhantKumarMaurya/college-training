#include <iostream>

class File {
public:
    virtual void open() const = 0; // Pure virtual function
};

class TextFile : public File {
public:
    void open() const override {
        std::cout << "Opening a text file." << std::endl;
    }
};

class BinaryFile : public File {
public:
    void open() const override {
        std::cout << "Opening a binary file." << std::endl;
    }
};

int main() {
    File* file1 = new TextFile();
    File* file2 = new BinaryFile();

    file1->open();
    file2->open();

    delete file1;
    delete file2;

    return 0;
}
