#include <iostream>

class Person {
public:
    virtual void introduce() const {
        std::cout << "I am a person." << std::endl;
    }
};

class Student : public Person {
public:
    void introduce() const override {
        std::cout << "I am a student." << std::endl;
    }
};

class Teacher : public Person {
public:
    void introduce() const override {
        std::cout << "I am a teacher." << std::endl;
    }
};

int main() {
    Person* p1 = new Student();
    Person* p2 = new Teacher();

    p1->introduce();
    p2->introduce();

    delete p1;
    delete p2;

    return 0;
}
