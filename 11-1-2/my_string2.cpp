#include<iostream>
#include<sstream>
#include<string>
#include"my_string2.h"

MyString2::MyString2(){}
MyString2::MyString2(std::string s):str(s){}
MyString2::MyString2(const MyString2& other):str(other.str){}
MyString2 MyString2::operator+(const MyString2& b){return MyString2(str+b.str);}
MyString2 MyString2::operator*(const int b){
    std::string s=str;
    for(int i=1;i<b;++i)s+=str;
    return MyString2(s);
}
std::ostream& operator<<(std::ostream& out, MyString2& my_string){
    out<<my_string.str;
    return out;
}
std::istream& operator>>(std::istream& in, MyString2& my_string){
    in>>my_string.str;
    return in;
}

