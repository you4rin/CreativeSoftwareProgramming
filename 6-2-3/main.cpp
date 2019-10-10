#include<iostream>
#include<string>
#include"accounts.h"

int main(){
    AccountManager a;
    while(1){
        std::cout<<"Job?\n";
        std::string task;
        std::cin>>task;
        if(task=="D"){
            int ID,amount;
            std::cin>>ID>>amount;
            a.deposit(ID,amount);
        }
        else if(task=="W"){
            int ID,amount;
            std::cin>>ID>>amount;
            a.withdrawal(ID,amount);
        }
        else if(task=="T"){
            int ID1,ID2,amount;
            std::cin>>ID1>>ID2>>amount;
            a.transfer(ID1,ID2,amount);
        }
        else if(task=="N")a.newAccount();
        else break;
    }
    return 0;
}
