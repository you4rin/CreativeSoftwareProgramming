#include<iostream>

void getSumDiff(int a,int b,int& sum,int& diff){
    sum=a+b;
    diff=a-b;
}

int main(){
    int a,b;
    std::cin>>a>>b;
    int sum,diff;
    getSumDiff(a,b,sum,diff);
    std::cout<<"sum:"<<sum<<"\ndiff:"<<diff<<"\n";
    return 0;
}
