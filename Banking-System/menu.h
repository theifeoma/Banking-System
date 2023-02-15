//
// Created by Ifeoma on 08/02/2023.
//

#ifndef HELLOWORLD_MENU_H
#define HELLOWORLD_MENU_H
#include "controller.h"
//using namespace std;

class menu{
    controller controller;
public:
    void mainmenu();
    void mOpenAccount();
    void mWithdraw();
    void mDeposit();
    void mViewBalance();
    void mTransfer();
};

#endif //HELLOWORLD_MENU_H
