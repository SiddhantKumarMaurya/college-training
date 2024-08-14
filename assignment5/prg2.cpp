#include <iostream>

class Animal {
public:
    virtual void sound() = 0; // Pure virtual function
};

class Dog : public Animal {
public:
    void sound() override {
        std::cout << "Woof Woof" << std::endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        std::cout << "Meow Meow" << std::endl;
    }
};

int main() {
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    dog->sound();
    cat->sound();

    delete dog;
    delete cat;

    return 0;
}
