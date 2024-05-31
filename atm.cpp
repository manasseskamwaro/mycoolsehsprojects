#include <iostream>

using namespace std;

class ATM {
private:
    double balance;

public:
    ATM() {
        balance = 250000; // Initial balance
    }

    void checkBalance() {
        cout << "Your balance is: ksh" << balance << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited successfully. Your new balance is: ksh" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds. Your balance is: ksh" << balance << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn successfully. Your new balance is: ksh" << balance << endl;
        }
    }
};

int main() {
    ATM atm;

    int choice;
    double amount;

    while (true) {
        cout << "\nWelcome to the ATM System" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                cout << "Enter amount to deposit: ksh";
                cin >> amount;
                atm.deposit(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ksh";
                cin >> amount;
                atm.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for using ATM System" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
