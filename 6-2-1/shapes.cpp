#include "shapes.h"

Circle::Circle():x(0),y(0),r(0){}
Circle::Circle(int x,int y,int r):x(x),y(y),r(r){}
double Circle::getArea(){return r*r*PI;}
double Circle::getPerimeter(){return 2*r*PI;}

Rectangle::Rectangle():x1(0),y1(0),x2(0),y2(0){}
Rectangle::Rectangle(int x1,int y1,int x2,int y2):x1(x1),y1(y1),x2(x2),y2(y2){}
int Rectangle::getArea(){return (x2-x1)*(y1-y2);}
int Rectangle::getPerimeter(){return 2*(x2-x1+y1-y2);}
