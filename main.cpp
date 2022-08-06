#include <iostream>
#include <memory>
#include <vector>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
//    
//     Account dex{"Dexter", 5000};         // abstract
//     cout << dex << endl;

    Checking_Account neo {"Neo", 5000};     // matrix?
    cout << neo << endl;
    
    Account *trust = new Trust_Account("James");
    cout << *trust << endl;
    
    Account *p1 = new Checking_Account("Larry", 10000);
    Account *p2 = new Savings_Account("Moe", 1000, 15);
    Account *p3 = new Trust_Account("Curly", 5000, 7.5);
    
    std::vector<Account *> accounts {p1,p2,p3};
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 200);
    
    display(accounts);
    
    withdraw(accounts, 2000);
    display(accounts);
    
    delete p1;
    delete p2;
    delete p3;
    return 0;
}

