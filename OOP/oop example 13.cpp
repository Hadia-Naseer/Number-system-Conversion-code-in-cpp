#include <iostream>
using namespace std;

class BankAccount {
private:
    int account_no;
    double balance;

public:
    // Constructor to initialize account number and balance
    BankAccount(int acc_no, double initial_balance) {
        account_no = acc_no;
        balance = initial_balance;
    }

    // Function to set the balance
    void setBalance(double new_balance) {
        balance = new_balance;
    }

    // Function to set the account number
    void setAccount_no(int new_account_no) {
        account_no = new_account_no;
    }

    // Function to get the balance
    double getBalance() const {
        return balance;
    }

    // Function to get the account number
    int getAccount_no() const {
        return account_no;
    }

    // Function to display account details
    void display() const {
        cout << "Account Number: " << account_no << endl;
        cout << "Balance: $" << balance << endl;
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful!" << endl;
        }
    }

    // Function to deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful!" << endl;
    }
};

int main() {
   
    BankAccount account1(1001, 500.0); 
    BankAccount account2(1002, 1000.0);
 
    cout << "Account Holder 1:" << endl;
    account1.display();
    cout << endl;

    cout << "Account Holder 2:" << endl;
    account2.display();
    cout << endl;

  
    account1.deposit(200.0);
    account1.display();
    cout << endl;
    account2.withdraw(150.0);
    account2.display();
    cout << endl;
    account1.withdraw(800.0);
    account1.display();
    cout << endl;

    return 0;
}