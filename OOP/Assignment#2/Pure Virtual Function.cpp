//Create an abstract base class BankAccount with a pure virtual function calculateInterest().
//Derive two classes SavingsAccount and CurrentAccount from BankAccount and implement calculateInterest() accordingly.
#include <iostream>
using namespace std;

class BankAccount {
public:
    virtual void calculateInterest() = 0;         // Pure virtual function
};

class SavingsAccount : public BankAccount {
public:
    void calculateInterest() override {
        // Implement the interest calculation for a savings account here
        cout << "Interest for Savings Account calculated." <<endl;
    }
};

class CurrentAccount : public BankAccount {
public:
    void calculateInterest() override {
        // Implement the interest calculation for a current account here
        cout << "Interest for Current Account calculated." <<endl;
    }
};

int main() {
    SavingsAccount obj1;
    CurrentAccount obj2;

    obj1.calculateInterest();
    obj2.calculateInterest();

    return 0;
}

