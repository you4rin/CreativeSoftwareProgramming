#include<iostream>
#include"accounts.h"

Account::Account(int ID):ID(ID),balance(0){}
int Account::getBalance(){return balance;}
void Account::deposit(int amount){balance+=amount;}

AccountManager::AccountManager():count(0){}
AccountManager::~AccountManager(){for(int i=0;i<count;++i)delete accounts[i];}
void AccountManager::deposit(int ID,int amount){
    if(ID>=count)std::cout<<"Account does not exist\n\n";
    else if(accounts[ID]->getBalance()+amount>1000000)std::cout<<"Failure: Deposit to user "<<ID<<" "<<amount<<"\nBalance of user "<<ID<<": "<<accounts[ID]->getBalance()<<"\n\n";
    else {
        accounts[ID]->deposit(amount);
        std::cout<<"Success: Deposit to user "<<ID<<" "<<amount<<"\nBalance of user "<<ID<<": "<<accounts[ID]->getBalance()<<"\n\n";
    }
}
void AccountManager::withdrawal(int ID,int amount){
    if(ID>=count)std::cout<<"Account does not exist\n\n";
    else if(accounts[ID]->getBalance()-amount<0)std::cout<<"Failure: Withdraw from user "<<ID<<" "<<amount<<"\nBalance of user "<<ID<<": "<<accounts[ID]->getBalance()<<"\n\n";
    else {
        accounts[ID]->deposit(-amount);
        std::cout<<"Success: Withdraw from user "<<ID<<" "<<amount<<"\nBalance of user "<<ID<<": "<<accounts[ID]->getBalance()<<"\n\n";
    }
}
void AccountManager::transfer(int ID1,int ID2,int amount){
    int min=ID1>ID2?ID2:ID1;
    int max=ID1>ID2?ID1:ID2;
    if(ID1>=count||ID2>=count)std::cout<<"Account does not exist\n\n";
    else if(ID1==ID2)std::cout<<"Invalid account number\n\n";
    else if(accounts[ID1]->getBalance()-amount<0||accounts[ID2]->getBalance()+amount>1000000)std::cout<<"Failure: Transfer from user "<<ID1<<" to user "<<ID2<<" "<<amount<<"\nBalance of user "<<min<<": "<<accounts[min]->getBalance()<<"\nBalance of user "<<max<<": "<<accounts[max]->getBalance()<<"\n\n";
    else{
        accounts[ID1]->deposit(-amount);
        accounts[ID2]->deposit(amount);
        std::cout<<"Success: Transfer from user "<<ID1<<" to user "<<ID2<<" "<<amount<<"\nBalance of user "<<min<<": "<<accounts[min]->getBalance()<<"\nBalance of user "<<max<<": "<<accounts[max]->getBalance()<<"\n\n";
    }
}
void AccountManager::newAccount(){
    if(count==10)"Failure to register a new account\n\n";
    else{
        accounts[count]=new Account(count);
        std::cout<<"Account for user "<<count<<" registered\nBalance of user "<<count++<<": 0\n\n";
    }
}
