#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
    int age;
public:
    void set_value(string n, int a) {
        name = n;
        age = a;
    }
    virtual void get_info() {
        cout << name << " is " << age << " years old." << endl;
    }
};

class Zebra : public Animal {
public:
    void get_info() {
        Animal::get_info();
        cout << "The place of origin of zebra is Earth." << endl;
    }
};

class Dolphin : public Animal {
public:
    void get_info() {
        Animal::get_info();
        cout << "The place of origin of dolphin is water." << endl;
    }
};

int main() {
    Zebra zebra;
    Dolphin dolphin;
    zebra.set_value("Zebra", 4);
    dolphin.set_value("Dolphin", 8);
    zebra.get_info();
    dolphin.get_info();
    return 0;
}
