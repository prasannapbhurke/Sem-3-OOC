/*3. Develop a simple banking system with classes for Account, SavingAccount, and CheckingAccount.
 Implement features such as deposit, withdrawal, and account statement.*/

#include <iostream>
using namespace std;

class Account 
{
protected:
    string name;
    int accNo;
    float balance;

public:
    void createAccount(string n, int a, float b) 
    {
        name = n;
        accNo = a;
        balance = b;
    }

    void deposit(float amount) 
    {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(float amount) 
    {
        if (amount <= balance) 
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else
            cout << "Insufficient balance!\n";
    }

    void showDetails() 
    {
        cout << "\n--- Account Statement ---\n";
        cout << "Name: " << name << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingAccount : public Account 
{
public:
    void addInterest() {
        float interest = balance * 0.03; // 3% interest
        balance += interest;
        cout << "Interest added: " << interest << endl;
    }
};

class CheckingAccount : public Account 
{
public:
    void deductFee() {
        balance -= 50; // fixed fee
        cout << "Service fee deducted: 50\n";
    }
};

int main() {
    SavingAccount s;
    CheckingAccount c;

    s.createAccount("Alice", 101, 1000);
    c.createAccount("Bob", 202, 2000);

    s.deposit(500);
    s.addInterest();
    s.showDetails();

    c.withdraw(700);
    c.deductFee();
    c.showDetails();

    return 0;
}
