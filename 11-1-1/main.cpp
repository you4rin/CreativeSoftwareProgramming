#include<iostream>
#include<sstream>
#include<string>
#include"my_string.h"

int main(){
    std::string task;
    MyString A,B,C;
    while(1){
        std::cin>>task;
        if(task=="new"){
            std::cout<<"enter a\n";
            std::cin>>A;
            std::cout<<"enter b\n";
            std::cin>>B;
        }
        else if(task=="a"){
            std::cin>>task;
            if(task=="+"){
                std::cin>>task;
                if(task=="a"){
                    C=A+A;
                    std::cout<<C<<std::endl;
                }
                else if(task=="b"){
                    C=A+B;
                    std::cout<<C<<std::endl;
                }
            }
            else if(task=="*"){
                int times;
                std::cin>>times;
                C=A*times;
                std::cout<<C<<std::endl;
            }
        }
        else if(task=="b"){
            std::cin>>task;
            if(task=="+"){
                std::cin>>task;
                if(task=="a"){
                    C=B+A;
                    std::cout<<C<<std::endl;
                }
                else if(task=="b"){
                    C=B+B;
                    std::cout<<C<<std::endl;
                }
            }
            else if(task=="*"){
                int times;
                std::cin>>times;
                C=B*times;
                std::cout<<C<<std::endl;
            }
        }
        else if(task=="quit")break;
    }
    return 0;
}
