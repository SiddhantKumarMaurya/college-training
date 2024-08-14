#include <iostream>

class Employee {
public:
    virtual double calculateSalary() = 0; // Pure virtual function
};

class Manager : public Employee {
    double baseSalary;
public:
    Manager(double salary) : baseSalary(salary) {}
    double calculateSalary() override {
        return baseSalary + (baseSalary * 0.2); // Bonus 20%
    }
};

class Engineer : public Employee {
    double baseSalary;
public:
    Engineer(double salary) : baseSalary(salary) {}
    double calculateSalary() override {
        return baseSalary + (baseSalary * 0.1); // Bonus 10%
    }
};

int main() {
    Employee* employees[2];

    employees[0] = new Manager(5000);
    employees[1] = new Engineer(4000);

    for (int i = 0; i < 2; i++) {
        std::cout << "Salary: " << employees[i]->calculateSalary() << std::endl;
    }

    delete employees[0];
    delete employees[1];

    return 0;
}
