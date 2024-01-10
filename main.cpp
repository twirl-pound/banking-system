// main.cpp

#include "account.h"

int main() {
    // Create an account with initial balance
    Account myAccount(12345, 1000.0);

    // Deposit and withdraw money
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    // Display the account information
    myAccount.display();

    return 0;
}
