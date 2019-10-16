#include<iostream>
#include<string>
#include"intset.h"

int main(){
    IntegerSet s;
    while(1){
        std::string task;
        std::cin>>task;
        if(task=="add"){
            int num;
            std::cin>>num;
            s.AddNumber(num);
            std::vector<int> v=s.GetAll();
            for(std::vector<int>::iterator it=v.begin();it!=v.end();++it)std::cout<<*it<<" ";
            std::cout<<"\n";
        }
        else if(task=="del"){
            int num;
            std::cin>>num;
            s.DeleteNumber(num);
            std::vector<int> v=s.GetAll();
            for(std::vector<int>::iterator it=v.begin();it!=v.end();++it)std::cout<<*it<<" ";
            std::cout<<"\n";
        }
        else if(task=="get"){
            int pos;
            std::cin>>pos;
            std::cout<<s.GetItem(pos)<<"\n";
        }
        else if(task=="quit")break;
    }
    return 0;
}
