#include<iostream>

int main(){
    int n;
    std::cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;++i)std::cin>>arr[i];
    int min,max;
    for(int i=0;i<n;++i){
        if(!i)min=arr[i],max=arr[i];
        else{
            if(arr[i]<min)min=arr[i];
            if(arr[i]>max)max=arr[i];
        }
    }
    std::cout<<"min: "<<min<<"\nmax: "<<max<<"\n";
    return 0;
}
