#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor called." << std::endl;
    }
    virtual ~Base() {
        std::cout << "Base destructor called." << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor called." << std::endl;
    }
    ~Derived() override {
        std::cout << "Derived destructor called." << std::endl;
    }
};

int main() {
    Base* b = new Derived(); // Dynamically allocate Derived object using Base pointer
    delete b; // Delete the Base pointer, which should call the Derived destructor

    return 0;
}
