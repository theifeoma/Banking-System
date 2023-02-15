//
// Created by Ifeoma on 08/02/2023.
//

#ifndef HELLOWORLD_CONTROLLER_H
#define HELLOWORLD_CONTROLLER_H

#include <string>
#include "savingsAccount.h"
#include "controller.h"
#include <map>

using namespace std;

class controller{

    map<string, savingsAccount>  account_map;
    int auto_gen_account_Number = 101010;

public:
    string cOpenAccount(string fn, string sn);
    string cDeposit(string account_Number, double amount);
    string cWithdraw(string account_Number, double amount);
    string cViewBalance(string account_Number);
    string cTransfer(string accountNumber, string accountNumber2, double amount);

};

#endif //HELLOWORLD_CONTROLLER_H

