#ifndef __CNAVAS_H__
#define __CANVAS_H__

#include<map>

class Canvas{
    std::map<int,std::string> c;
    int w,h;
    public:
    Canvas(size_t w,size_t h);
    ~Canvas();
    void Resize(size_t w,size_t h);
    bool DrawPixel(int x,int y,char brush);
    void Print();
    void Clear();
};
class Shape{
    public:
    Shape(int x,int y,int w,int h,char brush);
    virtual ~Shape();
    virtual void Draw(Canvas* canvas);
    virtual void printInfo();
    protected:
    int x,y,w,h;
    char brush;
};
class Rectangle:public Shape{
    public:
    Rectangle(int x,int y,int w,int h,char brush);
    void Draw(Canvas* canvas);
    void printInfo();
};
class UpTriangle:public Shape{
    public:
    UpTriangle(int x,int y,int d,char brush);
    void Draw(Canvas* canvas);
    void printInfo();
    protected:
    int d;
};
class DownTriangle:public Shape{
    public:
    DownTriangle(int x,int y,int d,char brush);
    void Draw(Canvas* canvas);
    void printInfo();
    protected:
    int d;
};
class Diamond:public Shape{
    public:
    Diamond(int x,int y,int d,char brush);
    void Draw(Canvas* canvas);
    void printInfo();
    protected:
    int d;
};

#endif
