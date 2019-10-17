#include<iostream>
#include<string>
#include<vector>
#include"message.h"

int main(){
    MessageBook m;
    while(1){
        std::string task;
        std::cin>>task;
        if(task=="add"){
            int number;
            std::cin>>number;
            std::string message;
            std::getline(std::cin,message);
            m.AddMessage(number,message.substr(1));
        }
        else if(task=="list"){
            std::vector<int> v=m.GetNumbers();
            for(std::vector<int>::iterator it=v.begin();it!=v.end();++it){
                std::cout<<*it<<": ";
                const std::string* s=&(m.GetMessage(*it));
                std::cout<<*s<<"\n";
                delete(s);
            }
        }
        else if(task=="print"){
            int number;
            std::cin>>number;
            const std::string* s=&(m.GetMessage(number));
            std::cout<<*s<<"\n";
            delete(s);
        }
        else if(task=="delete"){
            int number;
            std::cin>>number;
            m.DeleteMessage(number);
        }
        else if(task=="quit")break;
    }
    return 0;
}
