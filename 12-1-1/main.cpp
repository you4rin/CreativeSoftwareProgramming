#include<iostream>
#include<string>

template <class T>
void myswap(T& a,T& b){
    T temp=a;
    a=b;
    b=temp;
}

int main(){
    int a,b;
    std::cin>>a>>b;
    myswap(a,b);
    std::cout<<"After calling myswap(): "<<a<<" "<<b<<"\n";
    double c,d;
    std::cin>>c>>d;
    myswap(c,d);
    std::cout<<"After calling myswap(): "<<c<<" "<<d<<"\n";
    std::string e,f;
    std::cin>>e>>f;
    myswap(e,f);
    std::cout<<"After calling myswap(): "<<e<<" "<<f<<"\n";
}
