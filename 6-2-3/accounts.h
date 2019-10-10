#ifndef __ACCOUNTS_H__
#define __ACCOUNTS_H__

class Account{
    int ID,balance;
    public:
    Account();
    Account(int ID);
    int getBalance();
    void deposit(int amount);
};

class AccountManager{
    Account* accounts[10];
    int count;
    public:
    AccountManager();
    ~AccountManager();
    void deposit(int ID,int amount);
    void withdrawal(int ID,int amount);
    void transfer(int ID1,int ID2,int amount);
    void newAccount();
};

#endif
