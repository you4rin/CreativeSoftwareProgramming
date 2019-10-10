#include <iostream>
#include <string>
#include "shapes.h"

int main(){
    while(1){
        std::string task;
        std::cout<<"shape?\n";
        std::cin>>task;
        if(task=="Q")break;
        if(task=="C"){
            int x,y,r;
            std::cin>>x>>y>>r;
            Circle c(x,y,r);
            std::cout<<"area: "<<c.getArea()<<", perimeter: "<<c.getPerimeter()<<"\n\n";
        }
        else{
            int x1,y1,x2,y2;
            std::cin>>x1>>y1>>x2>>y2;
            Rectangle r(x1,y1,x2,y2);
            std::cout<<"area: "<<r.getArea()<<", perimeter: "<<r.getPerimeter()<<"\n\n";
        }
    }
    return 0;
}
