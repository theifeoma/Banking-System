//
// Created by Ifeoma on 08/02/2023.
//

#include "menu.h"
#include <iostream>
#include <string>
using namespace std;

//Boundary class. This is what the user sees and interacts with

void menu::mainmenu()
{
    cout<<"#############################"<<endl;
    cout<<"###### WELCOME TO WMBank #######"<<endl;
    cout<<"#############################"<<endl;
    cout << "1. Open an account" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Transfer" << endl;
    cout << "5. View Balance" << endl;
    cout << "Please enter an option" << endl;

    short option;
    cin >> option;

    switch(option)
    {

        case 1:
            mOpenAccount();
            break;
        case 2:
            mDeposit();
            break;
        case 3:
            mWithdraw();
            break;
        case 4:
            mTransfer();
            break;
        case 5:
            mViewBalance();
            break;
        default:
            cout << "Please enter a number between 1 - 4 only" << endl;
    }
    mainmenu();
}

//All functions should return a string

void menu::mOpenAccount()
{
    cout << "Please enter your first name" << endl;
    string fn;
    cin >> fn;
    cout << "Please enter your second name" << endl;
    string sn;
    cin >> sn;
    cout << controller.cOpenAccount(fn, sn) << endl;
}
void menu::mWithdraw()
{
    cout << "Please enter account number " << endl;
    string accountNumber;
    cin >> accountNumber;
    cout << "Please enter amount" << endl;
    double amount;
    cin >> amount;
    cout << controller.cWithdraw(accountNumber, amount) << endl;
}
void menu::mDeposit()
{
    cout << "Please enter account number " << endl;
    string accountNumber;
    cin >> accountNumber;
    cout << "Please enter amount" << endl;
    double amount;
    cin >> amount;
    cout << controller.cDeposit(accountNumber, amount) << endl;
}
void menu::mViewBalance()
{
    cout << "Please enter account number " << endl;
    string accountNumber;
    cin >> accountNumber;
    cout << controller.cViewBalance(accountNumber) << endl;
}
void menu::mTransfer()
{
    cout << "Please enter account number " << endl;
    string accountNumber;
    cin >> accountNumber;
    cout << "Please enter account number to transfer to " << endl;
    string accountNumber2;
    cout << "Please enter amount" << endl;
    double amount;
    cin >> amount;
    cout << controller.cTransfer(accountNumber, accountNumber2, amount) << endl;
}
