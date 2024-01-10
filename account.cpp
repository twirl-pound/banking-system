// account.cpp

#include "account.h"
#include <iostream>

Account::Account(int accNumber, double initialBalance) : accountNumber(accNumber), balance(initialBalance) {}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds!" << std::endl;
    }
}

void Account::display() {
    std::cout << "Account Number: " << accountNumber << ", Balance: $" << balance << std::endl;
}
