//
// Created by Ifeoma on 07/02/2023.
//

#include<iostream>
//#include <string>
using namespace std;
#include "savingsAccount.h"

savingsAccount::savingsAccount (string _fn, string _sn, string _accountNumber, double _balance)
{
    fn = _fn;
    sn = _sn;
    accountNumber = _accountNumber;
    balance = _balance;
}

void savingsAccount::withdraw(double amount)
{
    if (amount <= balance){
        balance -= amount;
    }
}
void savingsAccount::deposit(double amount)
{
    balance += amount;
}
double savingsAccount::viewBalance()
{
    return balance;
}
string savingsAccount::getAccountNumber()
{
    return accountNumber;
}

ostream& operator<<(ostream& os, const savingsAccount& sObject)
{
    os << sObject.fn << " " << sObject.sn << " " << sObject.balance << " " << sObject.accountNumber;
};
