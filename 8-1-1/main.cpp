#include<iostream>
#include<string>
#include"number.h"

int main(){
    std::string task;
    while(1){
        std::cin>>task;
        if(task=="number"){
            int num;
            std::cin>>num;
            Number n;
            n.setNumber(num);
            std::cout<<"getNumber(): "<<n.getNumber()<<"\n";
        }
        else if(task=="square"){
            int num;
            std::cin>>num;
            Square s;
            s.setNumber(num);
            std::cout<<"getNumber(): "<<s.getNumber()<<"\ngetSquare(): "<<s.getSquare()<<"\n";
        }
        else if(task=="cube"){
            int num;
            std::cin>>num;
            Cube c;
            c.setNumber(num);
            std::cout<<"getNumber(): "<<c.getNumber()<<"\ngetSquare(): "<<c.getSquare()<<"\ngetCube(): "<<c.getCube()<<"\n";
        }
        else break;
    }
    return 0;
}
