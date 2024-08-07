#include <iostream>
using namespace std;

class Medicine {
protected:
    string category, date_of_manufacture, company_name;
public:
    Medicine(string c, string d, string cn) : category(c), date_of_manufacture(d), company_name(cn) {}
};

class Tablet : public Medicine {
protected:
    string tablet_name;
    double price;
public:
    Tablet(string c, string d, string cn, string tn, double p) : Medicine(c, d, cn), tablet_name(tn), price(p) {}
};

class PainReliever : public Tablet {
    int dosage_units;
    string side_effects;
    int use_within_days;
public:
    PainReliever(string c, string d, string cn, string tn, double p, int du, string se, int uwd)
        : Tablet(c, d, cn, tn, p), dosage_units(du), side_effects(se), use_within_days(uwd) {}

    void display_info() {
        cout << "Medicine Category: " << category << endl;
        cout << "Date of Manufacture: " << date_of_manufacture << endl;
        cout << "Company Name: " << company_name << endl;
        cout << "Tablet Name: " << tablet_name << endl;
        cout << "Price: " << price << endl;
        cout << "Dosage Units: " << dosage_units << endl;
        cout << "Side Effects: " << side_effects << endl;
        cout << "Use Within Days: " << use_within_days << endl;
    }
};

int main() {
    PainReliever pain_reliever("Analgesic", "2023-08-01", "Pharma Inc.", "PainAway", 20, 2, "Nausea, Drowsiness", 30);
    pain_reliever.display_info();
    return 0;
}
