#include<iostream>

void bubbleSort(int arr[],int size){
    for(int i=0;i<size-1;++i){
        for(int j=1;j<size-i;++j){
            if(arr[j-1]>arr[j]){
                int temp=arr[j-1];
                arr[j-1]=arr[j],arr[j]=temp;
            }
        }
    }
}

int main(){
    int N;
    std::cin>>N;
    if(N<=0)return 0;
    int* arr=new int[N];
    for(int i=0;i<N;++i)std::cin>>arr[i];
    bubbleSort(arr,N);
    for(int i=0;i<N;++i)std::cout<<arr[i]<<" ";
    std::cout<<"\n";
    delete[] arr;
}
