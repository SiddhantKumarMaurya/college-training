#include <iostream>
#include <vector>

class Vehicle {
public:
    virtual void describe() const = 0; // Pure virtual function
};

class Car : public Vehicle {
public:
    void describe() const override {
        std::cout << "This is a Car." << std::endl;
    }
};

class Bike : public Vehicle {
public:
    void describe() const override {
        std::cout << "This is a Bike." << std::endl;
    }
};

int main() {
    std::vector<Vehicle*> vehicles;

    vehicles.push_back(new Car());
    vehicles.push_back(new Bike());

    for(const auto& vehicle : vehicles) {
        vehicle->describe();
    }

    // Clean up the allocated memory
    for(auto& vehicle : vehicles) {
        delete vehicle;
    }

    return 0;
}
