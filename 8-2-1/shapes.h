#ifndef __SHAPES_H__
#define __SHAPES_H__

class Shape{
    public:
        Shape();
        Shape(int x,int y,int w,int h,char brush);
        double GetArea(){}
        int GetPerimeter(){}
        void Draw(int canvas_width,int canvas_height){}
    protected:
        int x,y,w,h;
        char brush;
};


class Rect:public Shape{
    public:
        Rect();
        Rect(int x,int y,int w,int h,char brush);
        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width,int canvas_height);
};

class Square:public Shape{
    public:
        Square();
        Square(int x,int y,int l,char brush);
        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width,int canvas_height);
};

class Diamond:public Shape{
    public:
        Diamond();
        Diamond(int x,int y,int l,char brush);
        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width,int canvas_height);
};

#endif
