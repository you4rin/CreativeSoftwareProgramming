#include<iostream>
#include<string>
#include<vector>

class A{
    int* a;
public:
    A(int a):a(new int(a)){std::cout<<"new memberA\n";}
    virtual ~A(){std::cout<<"delete memberA\n";}
    virtual void print(){std::cout<<"*memberA "<<*a<<"\n";}
};

class B:public A{
    double* b;
public:
    B(double b):A(1),b(new double(b)){std::cout<<"new memberB\n";}
    ~B(){std::cout<<"delete memberB\n";}
    void print(){
        A::print();
        std::cout<<"*memberB "<<*b<<"\n";
    }
};

class C:public B{
    std::string* c;
public:
    C(std::string c):B(1),c(new std::string(c)){std::cout<<"new memberC\n";}
    ~C(){std::cout<<"delete memberC\n";}
    void print(){
        B::print();
        std::cout<<"*memberB "<<*c<<"\n";
    }
};

int main(){
    int a;
    double b;
    std::string c;
    std::cin>>a>>b>>c;
    std::vector<A*> arr;
    arr.push_back(new A(a));
    arr.push_back(new B(b));
    arr.push_back(new C(c));
    for(std::vector<A*>::iterator it=arr.begin();it!=arr.end();++it)(*it)->print();
    for(std::vector<A*>::iterator it=arr.begin();it!=arr.end();++it)delete *it;
    return 0;
}
