#ifndef __SHAPES_H__
#define __SHAPES_H__

#define PI 3.14

class Circle{
    int x,y,r;
    public:
    Circle();
    Circle(int x,int y,int r);
    double getArea();
    double getPerimeter();
};

class Rectangle{
    int x1,y1,x2,y2;
    public:
    Rectangle();
    Rectangle(int x1,int y1,int x2,int y2);
    int getArea();
    int getPerimeter();
};

#endif
