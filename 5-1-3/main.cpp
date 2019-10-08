#include<iostream>
#include"minmax.h"

int main(int argc,char* argv[]){
    int* arr=new int[argc-1];
    for(int i=1;i<argc;++i)arr[i-1]=std::atoi(argv[i]);
    int min,max;
    getMinMax(arr,argc-1,min,max);
    std::cout<<"min: "<<min<<"\nmax: "<<max<<"\n";
    delete[] arr;
    return 0;
}
