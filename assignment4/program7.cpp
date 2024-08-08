#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    int mileage;
    int price;
public:
    void setVehicleDetails(int m, int p) {
        mileage = m;
        price = p;
    }
    void showVehicleDetails() {
        cout << "Mileage: " << mileage << "\nPrice: " << price << endl;
    }
};

class Car : public Vehicle {
protected:
    int ownership_cost;
    int warranty;
    int seating_capacity;
    string fuel_type;
public:
    void setCarDetails(int oc, int w, int sc, string ft) {
        ownership_cost = oc;
        warranty = w;
        seating_capacity = sc;
        fuel_type = ft;
    }
    void showCarDetails() {
        showVehicleDetails();
        cout << "Ownership Cost: " << ownership_cost << "\nWarranty: " << warranty 
             << "\nSeating Capacity: " << seating_capacity << "\nFuel Type: " << fuel_type << endl;
    }
};

class Bike : public Vehicle {
protected:
    int num_cylinders;
    int num_gears;
    string cooling_type;
    string wheel_type;
    int fuel_tank_size;
public:
    void setBikeDetails(int nc, int ng, string ct, string wt, int fts) {
        num_cylinders = nc;
        num_gears = ng;
        cooling_type = ct;
        wheel_type = wt;
        fuel_tank_size = fts;
    }
    void showBikeDetails() {
        showVehicleDetails();
        cout << "Number of Cylinders: " << num_cylinders << "\nNumber of Gears: " << num_gears 
             << "\nCooling Type: " << cooling_type << "\nWheel Type: " << wheel_type 
             << "\nFuel Tank Size: " << fuel_tank_size << " inches" << endl;
    }
};

class Audi : public Car {
private:
    string model_type;
public:
    void setAudiDetails(string mt) {
        model_type = mt;
    }
    void showAudiDetails() {
        showCarDetails();
        cout << "Model Type: " << model_type << endl;
    }
};

class Ford : public Car {
private:
    string model_type;
public:
    void setFordDetails(string mt) {
        model_type = mt;
    }
    void showFordDetails() {
        showCarDetails();
        cout << "Model Type: " << model_type << endl;
    }
};

class Bajaj : public Bike {
private:
    string make_type;
public:
    void setBajajDetails(string mt) {
        make_type = mt;
    }
    void showBajajDetails() {
        showBikeDetails();
        cout << "Make Type: " << make_type << endl;
    }
};

class TVS : public Bike {
private:
    string make_type;
public:
    void setTVSDetails(string mt) {
        make_type = mt;
    }
    void showTVSDetails() {
        showBikeDetails();
        cout << "Make Type: " << make_type << endl;
    }
};

int main() {
    Audi a;
    a.setVehicleDetails(15, 50000);
    a.setCarDetails(20000, 5, 5, "Petrol");
    a.setAudiDetails("A6");
    a.showAudiDetails();

    Ford f;
    f.setVehicleDetails(20, 40000);
    f.setCarDetails(15000, 4, 5, "Diesel");
    f.setFordDetails("Mustang");
    f.showFordDetails();

    Bajaj b;
    b.setVehicleDetails(60, 80000);
    b.setBikeDetails(2, 5, "Air", "Alloy", 15);
    b.setBajajDetails("Pulsar");
    b.showBajajDetails();

    TVS t;
    t.setVehicleDetails(55, 75000);
    t.setBikeDetails(2, 4, "Liquid", "Spokes", 12);
    t.setTVSDetails("Apache");
    t.showTVSDetails();

    return 0;
}
