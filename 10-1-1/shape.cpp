#include "shape.h"

Shape::Shape(double w,double h):w(w),h(h){}
Shape::~Shape(){}
Triangle::Triangle(double w,double h):Shape(w,h){}
double Triangle::getArea(){return w*h*0.5;}
Rectangle::Rectangle(double w,double h):Shape(w,h){}
double Rectangle::getArea(){return w*h;}
