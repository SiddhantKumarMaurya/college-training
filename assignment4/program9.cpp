#include <iostream>
#include <string>
using namespace std;

class RBI {
protected:
    float min_interest_rate;
    float min_balance;
    int max_withdrawal_limit;
public:
    RBI() {
        min_interest_rate = 4.0;
        min_balance = 1000;
        max_withdrawal_limit = 10000;
    }
    void displayRules() {
        cout << "Minimum Interest Rate: " << min_interest_rate << "%" << endl;
        cout << "Minimum Balance: " << min_balance << endl;
        cout << "Maximum Withdrawal Limit: " << max_withdrawal_limit << endl;
    }
};

class Customer {
public:
    string name;
    int account_number;
    float balance;
    Customer(string n, int acc_num, float bal) : name(n), account_number(acc_num), balance(bal) {}
};

class Account : public RBI {
public:
    Customer* cust;
    Account(Customer* c) : cust(c) {}
    void displayAccount() {
        cout << "Name: " << cust->name << "\nAccount Number: " << cust->account_number 
             << "\nBalance: " << cust->balance << endl;
    }
};

class SBI : public Account {
public:
    SBI(Customer* c) : Account(c) {}
};

class ICICI : public Account {
public:
    ICICI(Customer* c) : Account(c) {}
};

class PNB : public Account {
public:
    PNB(Customer* c) : Account(c) {}
};

int main() {
    RBI rbi;
    rbi.displayRules();

    Customer cust1("Alice", 101, 5000);
    Customer cust2("Bob", 102, 8000);

    SBI sbi(&cust1);
    ICICI icici(&cust2);

    cout << "\nSBI Customer Details:" << endl;
    sbi.displayAccount();
    
    cout << "\nICICI Customer Details:" << endl;
    icici.displayAccount();

    return 0;
}
