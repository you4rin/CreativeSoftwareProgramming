#include<iostream>
#include<algorithm>
#include"canvas.h"

Canvas::Canvas(size_t w,size_t h):w(w),h(h){
    std::string s=" ";
    for(int i=0;i<w;++i){
        char ch=i%10+48;
        s+=ch;
    }
    c[-1]=s;
    for(int i=0;i<h;++i){
        char ch=i%10+48;
        s=ch;
        for(int j=0;j<w;++j)s+=".";
        c[i]=s;
    }
}
Canvas::~Canvas(){}
void Canvas::Resize(size_t w,size_t h){
    this->w=w,this->h=h;
    c.clear();
    std::string s=" ";
    for(int i=0;i<w;++i){
        char ch=i%10+48;
        s+=ch;
    }
    c[-1]=s;
    for(int i=0;i<h;++i){
        char ch=i%10+48;
        s=ch;
        for(int j=0;j<w;++j)s+=".";
        c[i]=s;
    }
}
bool Canvas::DrawPixel(int x,int y,char brush){
    if(x>=w||y>=h||x<0||y<0)return false;
    c[y][x+1]=brush;
    return true;
}
void Canvas::Print(){for(std::map<int,std::string>::iterator it=c.begin();it!=c.end();++it)std::cout<<it->second<<std::endl;}
void Canvas::Clear(){Resize(w,h);}

Shape::Shape(int x,int y,int w,int h,char brush):x(x),y(y),w(w),h(h),brush(brush){}
Shape::~Shape(){}
void Shape::Draw(Canvas* canvas){}
void Shape::printInfo(){}

Rectangle::Rectangle(int x,int y,int w,int h,char brush):Shape(x,y,w,h,brush){}
void Rectangle::Draw(Canvas* canvas){for(int j=y;j<y+h;++j)for(int i=x;i<x+w;++i)canvas->DrawPixel(i,j,brush);}
void Rectangle::printInfo(){std::cout<<" rect "<<x<<" "<<y<<" "<<w<<" "<<h<<" "<<brush<<std::endl;}

UpTriangle::UpTriangle(int x,int y,int d,char brush):Shape(x,y+2,2*d-1,d,brush),d(d-1){}
void UpTriangle::Draw(Canvas* canvas){for(int j=y-d;j<=y;++j)for(int i=x-d;i<=x+d;++i)if(std::abs(x-i)+std::abs(y-j)<=d)canvas->DrawPixel(i,j,brush);}
void UpTriangle::printInfo(){std::cout<<" tri_up "<<x<<" "<<y-d<<" "<<d+1<<" "<<brush<<std::endl;}

DownTriangle::DownTriangle(int x,int y,int d,char brush):Shape(x,y-2,2*d-1,d,brush),d(d-1){}
void DownTriangle::Draw(Canvas* canvas){for(int j=y;j<=y+d;++j)for(int i=x-d;i<=x+d;++i)if(std::abs(x-i)+std::abs(y-j)<=d)canvas->DrawPixel(i,j,brush);}
void DownTriangle::printInfo(){std::cout<<" tri_down "<<x<<" "<<y+d<<" "<<d+1<<" "<<brush<<std::endl;}

Diamond::Diamond(int x,int y,int d,char brush):Shape(x,y+2,2*d+1,2*d+1,brush),d(d){}
void Diamond::Draw(Canvas* canvas){for(int j=y-d;j<=y+d;++j)for(int i=x-d;i<=x+d;++i)if(std::abs(x-i)+std::abs(y-j)<=d)canvas->DrawPixel(i,j,brush);}
void Diamond::printInfo(){std::cout<<" diamond "<<x<<" "<<y-d<<" "<<d<<" "<<brush<<std::endl;}
