#include<iostream>
#include<vector>
#include"animal.h"

int main(){
    std::string task;
    std::vector<Animal*> v;
    while(1){
        std::cin>>task;
        if(task=="0")break;
        else if(task=="z"){
            std::string name;
            int age,nS;
            std::cin>>name>>age>>nS;
            v.push_back(new Zebra(name,age,nS));
        }
        else if(task=="c"){
            std::string name,fT;
            int age;
            std::cin>>name>>age>>fT;
            v.push_back(new Cat(name,age,fT));
        }
    }
    for(std::vector<Animal*>::iterator it=v.begin();it!=v.end();++it){
        (*it)->printInfo();
        delete *it;
    }
    return 0;
}
