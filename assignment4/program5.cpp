#include <iostream>
using namespace std;

class Hotel {
protected:
    string hotel_name, hotel_type, city;
    double hotel_rate;
public:
    Hotel(string hn, string ht, string c, double hr) : hotel_name(hn), hotel_type(ht), city(c), hotel_rate(hr) {}
};

class Flight {
protected:
    string flight_no, source_city, destination_city, seat_no;
public:
    Flight(string fn, string sc, string dc, string sn) : flight_no(fn), source_city(sc), destination_city(dc), seat_no(sn) {}
};

class Passenger : public Hotel, public Flight {
    string name;
    int age;
public:
    Passenger(string hn, string ht, string c, double hr, string fn, string sc, string dc, string sn, string n, int a)
        : Hotel(hn, ht, c, hr), Flight(fn, sc, dc, sn), name(n), age(a) {}

    void display_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Hotel Name: " << hotel_name << endl;
        cout << "Hotel Type: " << hotel_type << endl;
        cout << "City: " << city << endl;
        cout << "Hotel Rate: " << hotel_rate << endl;
        cout << "Flight No: " << flight_no << endl;
        cout << "Source City: " << source_city << endl;
        cout << "Destination City: " << destination_city << endl;
        cout << "Seat No: " << seat_no << endl;
    }
};

int main() {
    Passenger passenger("Grand Hotel", "Five star", "Paris", 5000, "AF123", "Paris", "New York", "12A", "John Doe", 30);
    passenger.display_info();
    return 0;
}
