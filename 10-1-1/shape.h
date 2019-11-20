#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape{
public:
    Shape(double w,double h);
    virtual ~Shape();
    virtual double getArea()=0;
protected:
    double w, h;
};
class Triangle:public Shape{
public:
    Triangle(double w,double h);
    double getArea();
};
class Rectangle:public Shape{
public:
    Rectangle(double w,double h);
    double getArea();
};

#endif
