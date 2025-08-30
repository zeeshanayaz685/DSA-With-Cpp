#include <iostream>
using namespace std;

class BankAccount {
    double *balance;
    string *name;

public:
    BankAccount(string n, int b) {
        balance = new double(b);
        name = new string(n);
    }

    ~BankAccount() {
        cout << "Destructor Called\n";
        delete balance;
        delete name;
        balance = NULL;
        name = NULL;
    }

    BankAccount(const BankAccount &a1) {
        balance = new double(*a1.balance);
        name = new string(*a1.name);
    }

    void DisplayBalance() {
        cout << "Account Name: " << *name << endl;
        cout << "Balance: " << *balance << endl;
    }
    void SetName(string n){
    	name = new string (n);
	}
	void SetBalance(double b){
		balance = new double (b);
	}
};

int main() {
    BankAccount a1("Zeeshan", 200000);
    BankAccount a2(a1);

    a1.DisplayBalance();
    a2.DisplayBalance();  
    
    a1.SetName("Ali");
    a1.SetBalance(300000);
    
    a1.DisplayBalance();
    a2.DisplayBalance(); 
    

    return 0;
}
