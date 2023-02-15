//
// Created by Ifeoma on 07/02/2023.
//

#ifndef HELLOWORLD_SAVINGSACCOUNT_H
#define HELLOWORLD_SAVINGSACCOUNT_H
#include <string>

using namespace std;

class savingsAccount {

    string fn, sn, accountNumber;
    double balance;

public:
    savingsAccount (string _fn, string _sn, string _accountNumber, double _balance);
    void deposit(double amount);
    void withdraw(double amount);
    double viewBalance();
    string getAccountNumber();
    friend ostream& operator<<(ostream & os, const savingsAccount & sObject);
};


#endif //HELLOWORLD_SAVINGSACCOUNT_H
