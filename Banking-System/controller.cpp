//
// Created by Ifeoma on 08/02/2023.
//
#include <iostream>
#include <string>
#include "controller.h"
#include "savingsAccount.h"
#include <map>

// This is responsible for holding the data


string controller::cOpenAccount(string fn, string sn)
{
    //Current object(fn, sn, to_string(auto_gen_accountNumber));
    //account_map.push_back(object);
    //auto_gen_accountNumber++;
    savingsAccount sObject(fn, sn, to_string(auto_gen_account_Number), 0.0);
    account_map.insert({to_string(auto_gen_account_Number), sObject});
    return "Account successfully created. Account number is " + to_string(auto_gen_account_Number -1);
}

string controller::cDeposit(string accountNumber, double amount)
{       //return an iterator object and points at the end if it finds it. If not it points to the beginning
        //if item is found before the end of the map it exists
        //if item is found after the end it doesn't exist
        if (account_map.find(accountNumber) != account_map.end())
        {
            //second and not first to get the value. First is to access the key
            (account_map.find(accountNumber) -> second.deposit(amount));
            return "Deposit successful for the amount: £" + to_string(amount);
        }
        return "No such Account: ";
}

string controller::cWithdraw(string accountNumber, double amount)
{
    //return an iterator object and points at the end if it finds it. If not it points to the beginning
    //if item is found before the end of the map it exists
    //if item is found after the end it doesn't exist
    if (account_map.find(accountNumber) != account_map.end())
    {
        if(amount <= account_map.find(accountNumber) -> second.viewBalance()) {
            //second and not first to get the value. First is to access the key
            (account_map.find(accountNumber)->second.withdraw(amount));
            return "Withdraw successful for the amount: £" + to_string(amount);
        }
        else{
            return "Insufficient Balance";
        }
    }
    return "No such Account: ";
}

string controller::cViewBalance(string accountNumber)
{
    //return an iterator object and points at the end if it finds it. If not it points to the beginning
    //if item is found before the end of the map it exists
    //if item is found after the end it doesn't exist
    if (account_map.find(accountNumber) != account_map.end())
    {
        //second and not first to get the value. First is to access the key
        to_string(account_map.find(accountNumber)-> second.viewBalance());
    }
    else
    {
        return "No such Account";
    }
}

string controller::cTransfer(string accountNumber, string accountNumber2, double amount)
{
    if (account_map.find(accountNumber2) != account_map.end())
    {
        if (account_map.find(accountNumber) != account_map.end())
        {
            if (amount <= account_map.find(accountNumber)->second.viewBalance())
            {
                //second and not first to get the value. First is to access the key
                (account_map.find(accountNumber)->second.withdraw(amount));
                (account_map.find(accountNumber2)->second.deposit(amount));
                return "Transfer successful for the amount: £" + to_string(amount);
            }
            else
            {
                return "Insufficient Balance";
            }
        }
        else
        {
            return "Your Account doesn't exist ";
        }
    }
    else
    {
        return "Account to be sent to doesnt exist!";
    }

}