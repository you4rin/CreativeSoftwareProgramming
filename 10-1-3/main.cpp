#include<iostream>
#include<string>
#include<vector>

class B{
public:
    virtual ~B(){}
};
class C:public B{
public:
    void test_C(){std::cout<<"C::test_C()"<<std::endl;}
};
class D:public B{
public:
    void test_D(){std::cout<<"D::test_D()"<<std::endl;}
};

int main(){
    char c;
    std::vector<B*> v;
    while(1){
        std::cin>>c;
        if(c=='B')v.push_back(new B);
        else if(c=='C')v.push_back(new C);
        else if(c=='D')v.push_back(new D);
        else if(c=='0')break;
    }
    for(auto i:v){
        if(C* j=dynamic_cast<C*>(i))j->test_C();
        else if(D* j=dynamic_cast<D*>(i))j->test_D();
        delete i;
    }
    return 0;
}
