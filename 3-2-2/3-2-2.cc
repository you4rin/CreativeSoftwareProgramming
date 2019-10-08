#include<iostream>
#include<string>

int main(){
    std::string a,b,c;
    std::cin>>a>>b;
    c=a+b;
    std::cout<<c<<"\n"<<c[0]<<"\n"<<c[c.length()-1]<<"\n";
    return 0;
}
