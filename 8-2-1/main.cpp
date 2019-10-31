#include<iostream>
#include<string>
#include"shapes.h"

int main(){
    int cw,ch;
    std::cin>>cw>>ch;
    std::string task;
    while(1){
        std::cin>>task;
        if(task=="rect"){
            int x,y,w,h;
            char brush;
            std::cin>>x>>y>>w>>h>>brush;
            Rect r(x,y,w,h,brush);
            std::cout<<"Area: "<<r.GetArea()<<"\nPerimeter: "<<r.GetPerimeter()<<"\n";
            r.Draw(cw,ch);
        }
        else if(task=="square"){
            int x,y,l;
            char brush;
            std::cin>>x>>y>>l>>brush;
            Square s(x,y,l,brush);
            std::cout<<"Area: "<<s.GetArea()<<"\nPerimeter: "<<s.GetPerimeter()<<"\n";
            s.Draw(cw,ch);
        }
        else if(task=="diamond"){
            int x,y,l;
            char brush;
            std::cin>>x>>y>>l>>brush;
            Diamond d(x,y,l,brush);
            std::cout<<"Area: "<<d.GetArea()<<"\nPerimeter: "<<d.GetPerimeter()<<"\n";
            d.Draw(cw,ch);
        }
        else break;
    }
    return 0;
}
