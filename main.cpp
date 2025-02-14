#include <iostream>
#include <cassert>

// Step 3: Design the Core Functionalities
void displayMenu() {
    std::cout << "======== AUTHOR: Jeff Davis ====\n";
    std::cout << "======== PROF: Chad Whiteley ===\n";
    std::cout << "======== BANKING SYSTEM ========\n";
    std::cout << "1. Deposit Money\n";
    std::cout << "2. Withdraw Money\n";
    std::cout << "3. Check Balance\n";
    std::cout << "4. Exit\n";
    std::cout << "================================\n";
    std::cout << "Choose an option: ";
}

int main() {
    double balance = 0.0;
    int choice;
    bool running = true;

    // Step 4: Implement Control Structures
    while (running) {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                // Implement deposit functionality
                double depositAmount;
                std::cout << "Enter amount to deposit: ";
                std::cin >> depositAmount;
                if (depositAmount > 0) {
                    balance += depositAmount;
                    std::cout << "Deposit successful! New balance: $" << balance << "\n";
                } else {
                    std::cout << "Invalid amount. Deposit must be positive.\n";
                }
                break;
            }
            case 2: {
                // Implement withdrawal functionality
                double withdrawAmount;
                std::cout << "Enter amount to withdraw: ";
                std::cin >> withdrawAmount;
                if (withdrawAmount > 0 && withdrawAmount <= balance) {
                    balance -= withdrawAmount;
                    std::cout << "Withdrawal successful! New balance: $" << balance << "\n";
                } else if (withdrawAmount > balance) {
                    std::cout << "Insufficient funds! Withdrawal failed.\n";
                } else {
                    std::cout << "Invalid amount. Withdrawal must be positive.\n";
                }
                break;
            }
            case 3:
                // Check balance functionality
                std::cout << "Your current balance is: $" << balance << "\n";
                break;
            case 4:
                // Exit condition
                running = false;
                std::cout << "Exiting the banking system. Thank you for using our service!\n";
                break;
            default:
                std::cout << "Invalid option! Please choose a valid menu option.\n";
                break;
        }
    }

    return 0;
}