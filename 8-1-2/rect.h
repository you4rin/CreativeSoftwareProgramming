#ifndef __RECT_H__
#define __RECT_H__

class Rectangle{
    public:
        Rectangle(int width,int height);
        int getArea();
        int getPerimeter();
    protected:
        int w,h;
};

class Square:public Rectangle{
    public:
        Square(int width);
        void print();
};

class NonSquare:public Rectangle{
    public:
        NonSquare(int width,int height);
        void print();
};

#endif
