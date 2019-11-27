#include<iostream>
#include<string>
#include"my_container.h"

int main(){
    int s;
    std::cin>>s;
    MyContainer<int> m1(s);
    std::cin>>m1;
    std::cout<<m1<<std::endl;
    std::cin>>s;
    MyContainer<double> m2(s);
    std::cin>>m2;
    std::cout<<m2<<std::endl;
    std::cin>>s;
    MyContainer<std::string> m3(s);
    std::cin>>m3;
    std::cout<<m3<<std::endl;
    return 0;
}
