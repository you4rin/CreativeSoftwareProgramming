#include<iostream>
#include<vector>
#include"canvas.h"

int main(){
    int w,h;
    std::cin>>w>>h;
    Canvas c(w,h);
    c.Print();
    std::vector<Shape*> v;
    std::string task;
    while(1){
        std::cin>>task;
        if(task=="quit")break;
        else if(task=="add"){
            std::cin>>task;
            if(task=="rect"){
                int x,y,w,h;
                char brush;
                std::cin>>x>>y>>w>>h>>brush;
                v.push_back(new Rectangle(x,y,w,h,brush));
            }
            else if(task=="tri_down"){
                int x,y,d;
                char brush;
                std::cin>>x>>y>>d>>brush;
                v.push_back(new DownTriangle(x,y,d,brush));
            }
            else if(task=="tri_up"){
                int x,y,d;
                char brush;
                std::cin>>x>>y>>d>>brush;
                v.push_back(new UpTriangle(x,y,d,brush));
            }
            else if(task=="diamond"){
                int x,y,d;
                char brush;
                std::cin>>x>>y>>d>>brush;
                v.push_back(new Diamond(x,y,d,brush));
            }
            else continue;
        }
        else if(task=="draw"){
            c.Clear();
            for(std::vector<Shape*>::iterator it=v.begin();it!=v.end();++it)(*it)->Draw(&c);
            c.Print();
        }
        else if(task=="dump"){
            std::vector<Shape*>::iterator it=v.begin();
            for(int i=0;i<v.size();++i){
                std::cout<<i;
                (*it)->printInfo();
                ++it;
            }
        }
        else if(task=="delete"){
            int del;
            std::cin>>del;
            if(del>=v.size())continue;
            std::vector<Shape*>::iterator it=v.begin()+del;
            v.erase(it);
        }
        else if(task=="resize"){
            int w,h;
            std::cin>>w>>h;
            c.Resize(w,h);
        }
    }
    for(std::vector<Shape*>::iterator it=v.begin();it!=v.end();++it)delete *it;
    return 0;
}
