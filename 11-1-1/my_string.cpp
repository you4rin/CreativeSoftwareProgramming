#include<iostream>
#include<sstream>
#include<string>
#include"my_string.h"

MyString& MyString::operator=(const MyString& b){
    str=b.str;
    return *this;
}
MyString MyString::operator+(const MyString& b){
    MyString ms;
    ms.str=str+b.str;
    return ms;
}
MyString MyString::operator*(const int b){
    MyString ms;
    ms.str=str;
    for(int i=1;i<b;++i)ms.str+=str;
    return ms;
}
std::ostream& operator<<(std::ostream& out, MyString& my_string){
    out<<my_string.str;
    return out;
}
std::istream& operator>>(std::istream& in, MyString& my_string){
    in>>my_string.str;
    return in;
}
