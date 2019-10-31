#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include"shapes.h"

Shape::Shape():x(0),y(0),w(0),h(0),brush('.'){}
Shape::Shape(int x,int y,int w,int h,char brush):x(x),y(y),w(w),h(h),brush(brush){}

Rect::Rect():Shape(0,0,0,0,'.'){}
Rect::Rect(int x,int y,int w,int h,char brush):Shape(x,y,w,h,brush){}
double Rect::GetArea(){return w*h;}
int Rect::GetPerimeter(){return 2*(w+h);}
void Rect::Draw(int canvas_width,int canvas_height){
    std::vector<std::string> canvas;
    std::string s1=" ";
    for(int i=0;i<canvas_width;++i)s1+=std::to_string(i%10);
    s1+="\n";
    canvas.push_back(s1);
    for(int i=0;i<canvas_height;++i){
        s1=std::to_string(i%10);
        for(int j=0;j<canvas_width;++j)s1+=".";
        s1+="\n";
        canvas.push_back(s1);
        
    }
    for(int i=(y>=0?y+1:1);i<(y+h<canvas_height+1?y+h+1:canvas_height+1);++i){
        for(int j=(x>=0?x+1:1);j<(x+w<canvas_width+1?x+w+1:canvas_width+1);++j){
            canvas[i][j]=brush;
        }
    }
    for(std::vector<std::string>::iterator it=canvas.begin();it!=canvas.end();++it)std::cout<<*it;
}

Square::Square():Shape(0,0,0,0,'.'){}
Square::Square(int x,int y,int l,char brush):Shape(x,y,l,l,brush){}
double Square::GetArea(){return w*w;}
int Square::GetPerimeter(){return 4*w;}
void Square::Draw(int canvas_width,int canvas_height){
    std::vector<std::string> canvas;
    std::string s1=" ";
    for(int i=0;i<canvas_width;++i)s1+=std::to_string(i%10);
    s1+="\n";
    canvas.push_back(s1);
    for(int i=0;i<canvas_height;++i){
        s1=std::to_string(i%10);
        for(int j=0;j<canvas_width;++j)s1+=".";
        s1+="\n";
        canvas.push_back(s1);
    }
    for(int i=(y>=0?y+1:1);i<(y+h<canvas_height+1?y+h+1:canvas_height+1);++i){
        for(int j=(x>=0?x+1:1);j<(x+w<canvas_width+1?x+w+1:canvas_width+1);++j){
            canvas[i][j]=brush;
        }        
    }
    for(std::vector<std::string>::iterator it=canvas.begin();it!=canvas.end();++it)std::cout<<*it;
}

Diamond::Diamond():Shape(0,0,0,0,brush){}
Diamond::Diamond(int x,int y,int l,char brush):Shape(x-l,y,2*l+1,2*l+1,brush){}
double Diamond::GetArea(){return (double)w*w/2;}
int Diamond::GetPerimeter(){return (int)(2*w*sqrt(2));}
void Diamond::Draw(int canvas_width,int canvas_height){
    std::vector<std::string> canvas;
    std::string s1=" ";
    for(int i=0;i<canvas_width;++i)s1+=std::to_string(i%10);
    s1+="\n";
    canvas.push_back(s1);
    for(int i=0;i<canvas_height;++i){
        s1=std::to_string(i%10);
        for(int j=0;j<canvas_width;++j)s1+=".";
        s1+="\n";
        canvas.push_back(s1);
    }
    for(int i=(y>=0?y+1:1);i<(y+h<canvas_height+1?y+h+1:canvas_height+1);++i){
        for(int j=(x>=0?x+1:1);j<(x+w<canvas_width+1?x+w+1:canvas_width+1);++j){
            if((i-y<w/2+1)&&((j-x<=w/2+1-i+y)||(j-x>=w/2+1+i-y))||((i-y>w/2+1)&&((j-x<=i-y-w/2-1)||(j-x>=w-i+y+w/2+2))))continue;
            else canvas[i][j]=brush;
        }
    }
    for(std::vector<std::string>::iterator it=canvas.begin();it!=canvas.end();++it)std::cout<<*it;
}
