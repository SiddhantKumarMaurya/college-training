#include <iostream>

class Complex {
protected:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    virtual Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    virtual Complex operator-(const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    virtual void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

class SpecialComplex : public Complex {
public:
    SpecialComplex(double r = 0, double i = 0) : Complex(r, i) {}

    SpecialComplex operator+(const Complex& other) override {
        std::cout << "SpecialComplex addition" << std::endl;
        return SpecialComplex(real + other.real, imag + other.imag);
    }

    SpecialComplex operator-(const Complex& other) override {
        std::cout << "SpecialComplex subtraction" << std::endl;
        return SpecialComplex(real - other.real, imag - other.imag);
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    SpecialComplex sc1(5, 6), sc2(2, 3);

    Complex result1 = c1 + c2;
    SpecialComplex result2 = sc1 + sc2;

    result1.display();
    result2.display();

    return 0;
}
