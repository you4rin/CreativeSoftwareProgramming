#include<iostream>
#include<string>
#include"rect.h"

int main(){
    std::string task;
    while(1){
        std::cin>>task;
        if(task=="nonsquare"){
            int w,h;
            std::cin>>w>>h;
            NonSquare n(w,h);
            n.print();
            std::cout<<"Area: "<<n.getArea()<<"\nPerimeter: "<<n.getPerimeter()<<"\n";
        }
        else if(task=="square"){
            int w;
            std::cin>>w;
            Square s(w);
            s.print();
            std::cout<<"Area: "<<s.getArea()<<"\nPerimeter: "<<s.getPerimeter()<<"\n";
        }
        else break;
    }
    return 0;
}
