#include<iostream>
#include<string>
#include<vector>

class A{
    public:
        virtual ~A(){}
        virtual std::string getTypeInfo(){return "This is an instance of class A";}
};

class B:public A{
    public:
        ~B(){}
        std::string getTypeInfo(){return "This is an instance of class B";}
};

class C:public B{
    public:
        ~C(){}
        std::string getTypeInfo(){return "This is an instance of class C";}
};

void printObjectTypeInfo1(A* object){std::cout<<object->getTypeInfo()<<std::endl;}
void printObjectTypeInfo2(A& object){std::cout<<object.getTypeInfo()<<std::endl;}

int main(){
    std::vector<A*> arr;
    arr.push_back(new A);
    arr.push_back(new B);
    arr.push_back(new C);
    for(std::vector<A*>::iterator it=arr.begin();it!=arr.end();++it){
        printObjectTypeInfo1(*it);
        printObjectTypeInfo2(**it);
        delete *it;
    }
    return 0;
}
