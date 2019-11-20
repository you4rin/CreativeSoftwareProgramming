#include<iostream>
#include<sstream>
#include<string>
#include"my_string2.h"

int main(){
    std::string task;
    MyString2 A,B;
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
                    MyString2 C(A+A);
                    std::cout<<C<<std::endl;
                }
                else if(task=="b"){
                    MyString2 C(A+B);
                    std::cout<<C<<std::endl;
                }
            }
            else if(task=="*"){
                int times;
                std::cin>>times;
                MyString2 C(A*times);
                std::cout<<C<<std::endl;
            }
        }
        else if(task=="a"){
            std::cin>>task;
            if(task=="+"){
                std::cin>>task;
                if(task=="a"){
                    MyString2 C(A+A);
                    std::cout<<C<<std::endl;
                }
                else if(task=="b"){
                    MyString2 C(A+B);
                    std::cout<<C<<std::endl;
                }
            }
            else if(task=="*"){
                int times;
                std::cin>>times;
                MyString2 C(A*times);
                std::cout<<C<<std::endl;
            }
        }
        else if(task=="quit")break;
    }
    return 0;
}
