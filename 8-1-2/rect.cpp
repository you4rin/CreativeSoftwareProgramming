#include<iostream>
#include"rect.h"

Rectangle::Rectangle(int width,int height):w(width),h(height){}
int Rectangle::getArea(){return w*h;}
int Rectangle::getPerimeter(){return 2*(w+h);}
Square::Square(int width):Rectangle(width,width){}
void Square::print(){std::cout<<w<<"x"<<h<<" Square\n";}
NonSquare::NonSquare(int width,int height):Rectangle(width,height){}
void NonSquare::print(){std::cout<<w<<"x"<<h<<" NonSquare\n";}
