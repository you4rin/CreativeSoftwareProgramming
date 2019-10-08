#include<iostream>

void magicSquare(int** arr,int size){
    int x=size/2,y=0;
    for(int i=1;i<=size*size;++i){
        if(i==1){
            arr[y][x]=i;
            continue;
        }
        if(!y&&x!=size-1){
            y=size-1;
            x+=1;
        }
        else if(!y)y+=1;
        else if(x==size-1){
            x=0;
            y-=1;
        }
        else if(arr[y-1][x+1])y+=1;
        else{
            y-=1;
            x+=1;
        }
        arr[y][x]=i;
    }
}

int main(){
    int N;
    std::cin>>N;
    if(N<3||!(N%2))return 0;
    int** arr=new int*[N];
    for(int i=0;i<N;++i)arr[i]=new int[N];
    for(int i=0;i<N;++i)for(int j=0;j<N;++j)arr[i][j]=0;
    magicSquare(arr,N);
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j)std::cout<<arr[i][j]<<" ";
        std::cout<<"\n";
    }
    for(int i=0;i<N;++i)delete[] arr[i];
    delete[] arr;
    return 0;
}
