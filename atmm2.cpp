#include <iostream>
#include <vector>
#include <iomanip>
#include <limits>

using namespace std;

struct Transaction {
    string type;
    double amount;
    double balanceAfter;
};

void displayTransactions(const vector<Transaction>& history) {
    cout << "\nLast 5 Transactions:\n";
    cout << left << setw(12) << "Type"
         << setw(12) << "Amount"
         << setw(15) << "Balance After" << endl;
    cout << "--------------------------------------\n";

    if (history.empty()) {
        cout << "No transactions yet.\n";
    } else {
        for (const auto& t : history) {
            cout << left << setw(12) << t.type
                 << setw(12) << fixed << setprecision(2) << t.amount
                 << setw(15) << t.balanceAfter << endl;
        }
    }
}

int main() {
    string correctPin = "1234", pin;
    double balance = 1000.0, amount;
    int choice, pinAttempts = 0;
    vector<Transaction> history;

    cout << "Welcome to the ATM System\n";
    cout << "City Bank\n";
    cout << "Invest on, not in\n";

    while (pinAttempts < 3) {
        cout << "Enter your PIN: ";
        cin >> pin;
        if (pin == correctPin) break;
        pinAttempts++;
        cout << "Invalid PIN. "
             << (pinAttempts < 3 ? "Try again.\n" : "Too many failed attempts. Exiting...\n");
        if (pinAttempts >= 3) return 0;
    }

    do {
        cout << "\n============================\n";
        cout << "         ATM Menu           \n";
        cout << "============================\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. View Last 5 Transactions\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 1 and 5.\n";
            continue;
        }

        switch (choice) {
            case 1:
                cout << fixed << setprecision(2);
                cout << "Current balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter deposit amount: Rs. ";
                if (!(cin >> amount)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input. Deposit cancelled.\n";
                    break;
                }
                if (amount > 0) {
                    balance += amount;
                    history.push_back({"Deposit", amount, balance});
                    if (history.size() > 5) history.erase(history.begin());
                    cout << "Deposit successful. New balance: Rs. " << balance << endl;
                } else {
                    cout << "Invalid deposit amount.\n";
                }
                break;

            case 3:
                while (true) {
                    cout << "Enter withdrawal amount: Rs. ";
                    if (!(cin >> amount)) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Invalid input. Please enter a numeric value.\n";
                        continue;
                    }

                    if (amount <= 0) {
                        cout << "Invalid withdrawal amount. Must be more than Rs. 0.\n";
                    } else if (amount > balance) {
                        cout << "Insufficient funds. You have Rs. " << balance << endl;
                    } else if (static_cast<int>(amount) % 50 != 0) {
                        cout << "Error: Withdrawal must be a multiple of Rs. 50 or Rs. 100.\n";
                    } else {
                        break;  // Valid amount
                    }
                }

                balance -= amount;
                history.push_back({"Withdraw", amount, balance});
                if (history.size() > 5) history.erase(history.begin());
                cout << "Withdrawal successful. New balance: Rs. " << balance << endl;
                break;

            case 4:
                displayTransactions(history);
                break;

            case 5:
                cout << "Thank you for using our ATM. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
