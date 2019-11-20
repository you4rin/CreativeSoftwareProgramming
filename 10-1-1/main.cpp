#include<iostream>
#include<string>
#include<vector>
#include"shape.h"

int main(){
    std::string task;
    std::vector<Shape*> v;
    while(1){
        std::cin>>task;
        if(task=="r"){
            int w,h;
            std::cin>>w>>h;
            v.push_back(new Rectangle(w,h));
        }
        else if(task=="t"){
            int w,h;
            std::cin>>w>>h;
            v.push_back(new Triangle(w,h));
        }
        else if(task=="0")break;
    }
    for(auto i:v){
        std::cout<<i->getArea()<<std::endl;
        delete i;
    }
    return 0;
}
