// account.h

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    int accountNumber;
    double balance;

public:
    Account(int accNumber, double initialBalance);
    void deposit(double amount);
    void withdraw(double amount);
    void display();
};

#endif // ACCOUNT_H
