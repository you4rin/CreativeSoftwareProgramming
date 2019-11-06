#include<iostream>
#include<string>
#include<vector>

class A{
    public:
        virtual ~A(){}
        virtual std::string test(){return "A::test()";}   
};
class B:public A{
    public:
        ~B(){}
        std::string test(){return "B::test()";}
};
class C:public B{
    public:
        ~C(){}
        std::string test(){return "C::test()";}
};

int main(){
    std::vector<A*> arr;
    arr.push_back(new A);
    arr.push_back(new B);
    arr.push_back(new C);
    for(std::vector<A*>::iterator it=arr.begin();it!=arr.end();++it){
        std::cout<<(*it)->test()<<std::endl;
        delete *it;
    }
    return 0;
}
